class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(st.empty()) {
                st.push(nums[i]);
            }
            else if(st.top() > 0 && nums[i] < 0) {
                if(st.top() < abs(nums[i])) {
                    st.pop();
                    i--;
                }
                else if(st.top() == abs(nums[i])) {
                    st.pop();
                }
            }
            else {
                st.push(nums[i]);
            }
        }

        while(st.size() > 0) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};