class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int mn = INT_MAX;
            for(int x : nums) {
                if(x != 0) {
                    mn = min(mn, x);
                }
            } 
            if(mn==INT_MAX){
                break;
            }   

            for(int j=0;j<n;j++){
                if(nums[j]!=0){
                    nums[j]=nums[j]-mn;
                }
            }
            count++;
        }
        return count;
        
    }
};