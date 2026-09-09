class Solution {
public:
    string reversePrefix(string s, int k) {
        stack<char> st;
        for(int i=0;i<k;i++){
            st.push(s[i]);
        }
        string t="";
        while(st.size()>0){
            t=t+st.top();
            st.pop();
        }
        for(int i=k;i<s.length();i++){
            t=t+s[i];
        }
        return t;
        
    }
};