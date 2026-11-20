class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;

        for(int i = 0; i < n-1; i+=2) {

            string ans = to_string(nums[i]) + to_string(nums[i+1]);

            int num = stoi(ans);

            mn = min(mn, num);
        }

        return mn;
    }
};