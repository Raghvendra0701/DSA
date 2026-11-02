class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int st=0;
        int end=n-1;
        int mid=st+(end-st)/2;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[mid]){
                count+=nums[i]-nums[mid];
            }
            else if(nums[i]<nums[mid]){
                count+=nums[mid]-nums[i];
            }
        }
        return count;
    }
};