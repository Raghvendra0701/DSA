class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int bob=0;
        int alice=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                alice=alice+nums[i];
            }
            else{
                bob=bob+nums[i];
            }
        }
        if(alice!=bob){
            return true;
        }
        return false;
        
    }
};