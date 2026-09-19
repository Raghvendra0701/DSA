class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> s;
        for(int x:friends){
            s.insert(x);
        }
        for(int x:order){
            if(s.find(x)!=s.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};