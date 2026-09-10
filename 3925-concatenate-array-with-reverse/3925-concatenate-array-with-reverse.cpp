class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            st.push(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
    }
};