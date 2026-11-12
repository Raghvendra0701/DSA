class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;

        int in = 1;
        int de = 1;
        int ans = 1;

        for(int i = 0; i < n-1; i++) {

            if(nums[i] < nums[i+1]) {
                in++;
                de = 1;
            }
            else if(nums[i] > nums[i+1]) {
                de++;
                in = 1;
            }
            else {
                in = 1;
                de = 1;
            }

            ans = max(ans, max(in, de));
        }

        return ans;
    }
};