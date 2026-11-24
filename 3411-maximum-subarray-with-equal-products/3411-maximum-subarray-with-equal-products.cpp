class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        const long long LIMIT = 25200;

        for(int i = 0; i < n; i++) {
            long long prod = 1;
            long long ans1 = 0;
            long long ans2 = 1;

            for(int j = i; j < n; j++) {
                if(prod > LIMIT / nums[j]) {
                    break;
                }

                prod *= nums[j];

                ans1 = gcd(ans1, (long long)nums[j]);
                ans2 = lcm(ans2, (long long)nums[j]);

                if(ans1 != 0 && ans2 <= LIMIT / ans1) {
                    if(prod == ans1 * ans2) {
                        ans = max(ans, j - i + 1);
                    }
                }
            }
        }

        return ans;
    }
};