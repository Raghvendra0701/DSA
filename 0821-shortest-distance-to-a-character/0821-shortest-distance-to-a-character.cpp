class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            int mn=s.length();
            for(int j=0;j<s.length();j++){
                if(s[j]==c){
                    mn=min(mn,abs(i-j));
                }
            }
            ans.push_back(mn);

        }
        return ans;
        
    }
};