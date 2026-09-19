class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    } 
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto x : nums){
            map[x]++;
        }
        for(auto x: map){
            if(isprime(x.second)){
                return true;
            }
        }
        return false;
        
    }
};