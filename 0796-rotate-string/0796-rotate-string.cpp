class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m){
            return false;
        }
        for(int i=1;i<=n;i++){
            int first=s[0];
            for(int j=1;j<n;j++){
                s[j-1]=s[j];
            }
            s[n-1]=first;
            if(s==goal){
                return true;
            }
        }
        return false;
        
    }
};