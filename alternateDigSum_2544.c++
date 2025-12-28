#include<iostream>
using namespace std;
class Solution {
    public:
        int alternateDigitSum(int n) {
            string number = to_string(n);
            int sum=0;

            for (int i = 0; i < number.length(); i++)
           {
            int digit = number[i] - '0';  

            if (i%2==0)
            sum+= digit;
            else
            sum-=digit;
            }
         return sum;  
        }
    };