class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        set<int> s;
        map<int,int> mp;

        for(auto x : nums) {
            mp[x]++;
            s.insert(x);
        }

        vector<int> ans;

        while(s.size() != 0) {
            for(auto x : s) {
                ans.push_back(x);
                mp[x]--;
            }

            vector<int> temp;

            for(auto x : s) {
                if(mp[x] == 0) {
                    temp.push_back(x);
                }
            }

            for(auto x : temp) {
                s.erase(x);
            }
        }

        return ans;
    }
};