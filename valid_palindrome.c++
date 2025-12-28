#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
           string withoutSpacesS= "";
           string reversed= "";
            for(char alph:s){
                if(isalnum(alph)){
                    withoutSpacesS+=tolower(alph);
                }
            }
            bool ispal=true;
            for (size_t i = 0; i < withoutSpacesS.size(); i++)
            {
                if (withoutSpacesS[i] != withoutSpacesS[withoutSpacesS.size()-i-1])
                {
                    ispal = false;
                    break;
                }
            }            
            return ispal;
        }
    };

    int main (){
        Solution sol1 ;
    cout << sol1.isPalindrome("0P0");

    }