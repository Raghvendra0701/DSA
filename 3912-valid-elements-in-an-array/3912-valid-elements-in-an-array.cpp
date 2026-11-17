class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        if(n==1){
            return nums;
        }
        ans.push_back(nums[0]);
        for(int i=1;i<n-1;i++){
            bool left =true;
            bool right=true;
            for(int j=0;j<i;j++){
                if(nums[i]<=nums[j]){
                    left=false;
                    break;
                }
            }
            for(int j=i+1;j<n;j++){
                if(nums[i]<=nums[j]){
                    right=false;
                    break;
                }
            }
            if(left || right){
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        return ans;
        
    }
};