#include<iostream>
#include<string.h>
using namespace std;
class Solution {
    public:
        int strStr(string haystack, string needle) {
         for (int i = 0; i < haystack.length() ; i++)
         {
            string occurence = haystack.substr(i,needle.length());
            if (needle==occurence)
            {
                return i;
            }
            


         }
         return -1;
            
            
        }
    };

int main (){
Solution sol;
cout << sol.strStr("hello","ll");
    
return 0;
    }
