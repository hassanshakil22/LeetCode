#include<iostream>

using namespace std;

class Solution {
    public:
        string largestOddNumber(string num) {
            int lastOddIndex = -1;
    
            for (int i = 0; i < num.size(); i++) {
                int digit = num[i] - '0';
                if (digit % 2 != 0) {
                    lastOddIndex = i; 
                }
            }
            if (lastOddIndex != -1) {
                return num.substr(0, lastOddIndex + 1); 
            } else {
                return "";
            }
        }
    };