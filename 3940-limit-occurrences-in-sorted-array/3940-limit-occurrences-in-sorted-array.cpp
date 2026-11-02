class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto x : nums) {
            mp[x]++;
        }

        vector<int> ans;

        for(auto x : mp) {
            int count = min(x.second, k);

            while(count > 0) {
                ans.push_back(x.first);
                count--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};