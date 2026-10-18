class Solution {
public:
    bool validDigit(int n, int x) {
        int first = n;

        while (first >= 10) {
            first = first / 10;
        }

        if (first == x) {
            return false;
        }

        while (n > 0) {
            int d = n % 10;

            if (d == x) {
                return true;
            }

            n = n / 10;
        }

        return false;
    }
};