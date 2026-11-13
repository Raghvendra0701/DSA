class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int m = fruits.size();
        int n = baskets.size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            bool placed = false;

            for(int j = 0; j < n; j++) {
                if(baskets[j] != -1 && baskets[j] >= fruits[i]) {
                    baskets[j] = -1;
                    placed = true;
                    break;
                }
            }

            if(!placed) {
                count++;
            }
        }

        return count;
    }
};