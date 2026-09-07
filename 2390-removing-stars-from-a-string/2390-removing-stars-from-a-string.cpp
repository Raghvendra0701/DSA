class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '*') {
                if(!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(s[i]);
            }
        }

        string a = "";

        while(st.size() > 0) {
            a += st.top();
            st.pop();
        }

        reverse(a.begin(), a.end());

        return a;
    }
};