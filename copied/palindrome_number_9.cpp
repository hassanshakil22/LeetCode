#include<iostream>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) {
                return false;
            }
    
            string str_1 = std::to_string(x);
            string str_3 = std::string(str_1.rbegin(), str_1.rend());
    
            return str_1 == str_3;
        }
    };
