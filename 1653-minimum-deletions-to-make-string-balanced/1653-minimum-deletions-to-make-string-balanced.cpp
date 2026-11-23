class Solution {
public:
    int minimumDeletions(string s) {
        int b = 0;
        int count = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'b') {
                b++;
            }
            else {
                count = min(count + 1, b);
            }
        }

        return count;
    }
};