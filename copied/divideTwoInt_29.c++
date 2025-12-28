#include <climits>

class Solution {
    public:
        int divide(int dividend, int divisor) {
            // Edge case: INT_MIN / -1 leads to overflow
            if (dividend == INT_MIN && divisor == -1) {
                return INT_MAX;
            }
            
            return dividend / divisor; // Normal division
        }
    };
    