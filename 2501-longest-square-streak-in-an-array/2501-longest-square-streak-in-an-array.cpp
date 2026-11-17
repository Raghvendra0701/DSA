class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int> s;
        for(int x:nums){
            s.insert(x);
        }
        int ans=-1;
        for(int x:s){
            int count=1;
            long long curr=x;
            while(curr*curr<=100000){
                curr=curr*curr;
                if(s.find(curr)!=s.end()){
                    count++;
                }
                else{
                    break;
                }
            }
            if(count>=2){
                ans=max(ans,count);
            }
        }
        return ans;
    }
};