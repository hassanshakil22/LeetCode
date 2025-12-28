#include<iostream>

using namespace std;
class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
         for(int i = 1 ; i< s.length() ; i++ )   {
                if(s.length() % i == 0 ){
                    string  substring = s.substr(0,i);
                    string repeated ;
                    for (int j = 0; j < s.length() /i; j++)
                    {
                        repeated += substring ;
                    }
                    if (repeated == s)
                        return true;
                    
        }}
        return false;
    }
    };


    int main(){
        Solution s;
        cout << s.repeatedSubstringPattern("hashashasa");

        return  0;
    }
