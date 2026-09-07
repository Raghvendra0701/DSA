class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!="+" && s[i]!="D" && s[i]!="C"){
                st.push(stoi(s[i]));
            }
            if(s[i]=="+"){
                int x=st.top();
                st.pop();
                int y=st.top();
                st.push(x);
                st.push(x+y);
            }
            if(s[i]=="D"){
                st.push(2*st.top());
            }
            if(s[i]=="C"){
                st.pop();
            }
        }
        int ans=0;
        while(st.size()>0){
            ans=ans+st.top();
            st.pop();
        }
        return ans;
        
    }
};