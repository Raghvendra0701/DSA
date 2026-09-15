class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int mx = -1;

            for(int j = i + 1; j < n; j++) {
                mx = max(mx, arr[j]);
            }

            ans.push_back(mx);
        }

        return ans;
    }
};