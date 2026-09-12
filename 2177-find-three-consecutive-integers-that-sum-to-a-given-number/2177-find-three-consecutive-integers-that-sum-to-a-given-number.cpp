class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long n=num/3;
        vector<long long> ans;
        long long a=(n-1)+(n+1)+n;
        if(a==num){
            ans.push_back(n-1);
            ans.push_back(n);
            ans.push_back(n+1);
            
        }
        return ans;
    }
};