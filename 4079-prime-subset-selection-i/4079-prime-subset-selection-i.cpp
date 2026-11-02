class Solution {
public:
    bool isprime(int n) {
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        for(int i = 3; i*i <= n; i += 2) {
            if(n % i == 0)
            return false;
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int> ans;
        for(int i=2;i<=n;i++){
            if(isprime(i)){
                ans.push_back(i);
            }
        }
        vector<int> result;
        int sum=0;
        for(int i=0;i<ans.size();i++){
            if(sum + ans[i]<=s){
                sum=sum+ans[i];
                result.push_back(ans[i]);
            }
            else{
                break;
            }
        }
        return result;
        
    }
};