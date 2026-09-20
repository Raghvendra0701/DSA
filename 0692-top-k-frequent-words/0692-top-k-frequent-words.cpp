class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> map;
        vector<string> ans;
        for(auto x : words){
            map[x]++;
        }
        for(int i = 0; i < k; i++){
            int mx = 0;
            string word = "";
            for(auto x : map){
                if(x.second > mx || 
                   (x.second == mx && x.first < word)) {
                    mx = x.second;
                    word = x.first;
                }
            }
            ans.push_back(word);
            map.erase(word);
        }
        return ans;
    }
};