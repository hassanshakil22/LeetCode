#include<iostream>

using namespace std ;

class Solution {
    public:
        bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
                string conc1;
                string conc2;
           for (string word: word1)
           {
            conc1+=word;
           }
           for (string word: word2)
           {
            conc2+=word;
           }
           if (conc1==conc2)
            return true
           else
           return false
           
           
             
        }
    };