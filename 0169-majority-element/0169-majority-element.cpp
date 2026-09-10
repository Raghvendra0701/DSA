class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto x : nums){
            map[x]++;
        }
        int greatest = 0;
        int ans =0;
        for(auto x: map){
            if(x.second>greatest){
                greatest=x.second;
                ans = x.first;
            }
            
        }
        return ans;
        
    }
};