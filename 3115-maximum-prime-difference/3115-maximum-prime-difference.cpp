class Solution {
public:
    
    bool isprime(int n) {
        if(n < 2) 
            return false;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0)
                return false;
        }

        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {    
        vector<int> id; // prime elements ke indices
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(isprime(nums[i])) {
                id.push_back(i);
            }
        }

        int d = id.size();

        if(d > 1) {
            int diff = id[d - 1] - id[0];
            return diff;
        }

        return 0;
    }
};