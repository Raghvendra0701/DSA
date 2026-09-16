class Solution {
public:
    int fillCups(vector<int>& nums) {
        int count =0;
        while(nums[0]!=0 || nums[1]!=0 || nums[2]!=0 ){
            sort(nums.begin(),nums.end());
            if(nums[1]>0){
                nums[1]--;
                nums[2]--;
            }
            else{
                nums[2]--;
            }
            count++;
        }
        return count;

        
    }
};