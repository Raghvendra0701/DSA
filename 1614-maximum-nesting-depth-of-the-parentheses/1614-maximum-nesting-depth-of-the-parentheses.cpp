class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int n=s.length();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;

            }
            if(s[i]==')'){
                st.pop();
                count--;
            }
            ans=max(count,ans);

        }
        return ans;
        
    }
};