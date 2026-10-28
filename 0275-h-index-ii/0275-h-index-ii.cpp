class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        sort(citations.begin(), citations.end()); 

        for(int h = n; h >= 0; h--) {
            int count = 0;
            for(int i = n - 1; i >= 0; i--) {
                if(citations[i] >= h) {
                    count++;
                }
                else {
                    break; 
                }
            }

            if(count >= h) {
                return h;
            }
        }

        return 0;
    }
};