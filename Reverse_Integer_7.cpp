class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            int digit = x % 10;
            if (res > INT_MAX / 10 || res < INT_MIN / 10) // necessary for  overflow As we cannot use long as we have to return int  
                return 0;
            res = res * 10 + digit;
            x /= 10;
        }
        return res;
    }
};
