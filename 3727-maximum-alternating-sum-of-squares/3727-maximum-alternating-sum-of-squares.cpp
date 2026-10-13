
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> arr;

        for (int x : nums) {
            arr.push_back(1LL * x * x);
        }

        sort(arr.begin(), arr.end());

        int n = arr.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                sum -= arr[i];
            } else {
                sum += arr[i];
            }
        }

        return sum;
    }
};
