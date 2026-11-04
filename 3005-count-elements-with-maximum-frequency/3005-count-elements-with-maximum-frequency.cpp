class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto x: nums){
            map[x]++;
        }
        int mx=0;
        for(auto x:map){
            if(x.second>mx){
                mx=x.second;
            }
        }
        int count=0;
        for(auto x:map){
            if(x.second==mx){
                count=count+x.second;
            }
        }
        return count;
    }
};