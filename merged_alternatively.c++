#include<iostream>

using namespace std;
class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int greater = word1.length() > word2.length() ? word1.length() : word2.length();
            cout << greater <<endl;
            string returnStr = "";
            for (int i =0 ; i< greater ; i++){
                if (i<word1.length())
                {
                    returnStr += word1[i];
                }
                if (i<word2.length())
                {
                    returnStr += word2[i];
                }

            }
            return returnStr;
            
        }
    };

    int main(){

Solution s;
cout << s.mergeAlternately("hassan","shakil");
        return 0 ;
    }