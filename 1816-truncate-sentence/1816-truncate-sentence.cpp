class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v;
        stringstream ss(s);
        string word;

        while(ss >> word) {
            v.push_back(word);
        }

        string ans = "";

        for(int i = 0; i < k; i++) {
            ans = ans + v[i];

            if(i != k - 1)
                ans = ans + " ";
        }

        return ans;
    }
};