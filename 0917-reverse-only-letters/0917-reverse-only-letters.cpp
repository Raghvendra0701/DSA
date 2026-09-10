class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> st;
        int n=s.length();

        for(int i=0;i<n;i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                st.push(s[i]);
            }
        }

        for(int i=0;i<n;i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                s[i]=st.top();
                st.pop();
            }
        }

        return s;
    }
};