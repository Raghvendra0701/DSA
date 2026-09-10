class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int temp=n;
        int r=0;
        while(temp>0){
            r=r*10;
            r=r+(temp%10);
            temp=temp/10;
        }
        int st=min(n,r);
        int end=max(n,r);
        int sum=0;
        for(int i=st;i<=end;i++){
            if(isprime(i)){
                sum=sum+i;
            }
        }
        return sum;
        
    }
};