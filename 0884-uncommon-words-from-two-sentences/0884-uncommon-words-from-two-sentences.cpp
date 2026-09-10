class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> map;
        vector<string> ans;

        string x;
        stringstream ss1(s1);
        stringstream ss2(s2);

        while(ss1 >> x){
            map[x]++;
        }

        while(ss2 >> x){
            map[x]++;
        }

        for(auto x : map){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};