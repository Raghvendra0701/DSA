class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum=0;
        int sqrsum=0;
        while(n>0){
            int digit=n%10;
            digitsum=digitsum + digit;
            sqrsum=sqrsum + (digit*digit);
            n=n/10;
        }
        int ans=sqrsum - digitsum;
        if(ans>=50){
            return true;
        }
        return false;
        
    }
};