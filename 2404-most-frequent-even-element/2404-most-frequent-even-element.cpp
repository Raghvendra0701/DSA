class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto x: nums){
            map[x]++;
        }
        int freq=0;
        int ans=-1;
        for(auto x: map){
            if(x.first%2==0 ){
                if(x.second>freq){
                    freq=x.second;
                    ans=x.first;
                }
                else if(x.second==freq){
                    ans=min(ans,x.first);
                }
            }
        }
        return ans;
        
    }
};