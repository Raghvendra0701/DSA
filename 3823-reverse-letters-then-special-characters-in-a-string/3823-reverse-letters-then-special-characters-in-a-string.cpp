class Solution {
public:
    string reverseByType(string s) {
        stack<char> st1;
        stack<char> st2;
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=122){
                st1.push(s[i]);
            }
            else{
                st2.push(s[i]);
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=122){
                s[i]=st1.top();
                st1.pop();
            }
            else{
                s[i]=st2.top();
                st2.pop();
            }
        }
        return s;
        
    }
};