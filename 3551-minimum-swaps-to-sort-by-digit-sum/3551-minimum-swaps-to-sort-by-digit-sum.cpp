class Solution {
public:
    int sumdigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({sumdigits(nums[i]), nums[i]});
            mp[nums[i]] = i;
        }

        sort(arr.begin(), arr.end());

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            int correct = arr[i].second;

            if (nums[i] != correct) {
                int j = mp[correct];

                mp[nums[i]] = j;
                mp[correct] = i;

                swap(nums[i], nums[j]);
                swaps++;
            }
        }

        return swaps;
    }
};