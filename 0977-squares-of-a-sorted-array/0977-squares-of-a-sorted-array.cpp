
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);

        int i = 0;
        int j = n - 1;
        int k = n - 1;

        while (i <= j) {
            int left = nums[i] * nums[i];
            int right = nums[j] * nums[j];

            if (left > right) {
                arr[k] = left;
                i++;
            } else {
                arr[k] = right;
                j--;
            }
            k--;
        }

        return arr;
    }
};
