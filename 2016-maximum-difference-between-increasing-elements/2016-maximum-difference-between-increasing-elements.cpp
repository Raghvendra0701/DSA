class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    mx=max((nums[j]-nums[i]),mx);
                }
            }
        }
        return mx;
        
    }
};