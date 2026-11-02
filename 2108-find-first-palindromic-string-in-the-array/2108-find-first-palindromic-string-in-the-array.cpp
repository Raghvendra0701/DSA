class Solution {
public:
    string reverse(string a){
        string s="";
        int n=a.length();
        for(int i=n-1;i>=0;i--){
            s=s+a[i];
        }
        return s;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            if(words[i]==reverse(words[i])){
                return words[i];
            }
        }
        return "";
    }
};