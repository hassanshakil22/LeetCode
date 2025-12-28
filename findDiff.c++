#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
       sort(s.begin(), s.end());
       sort(t.begin(), t.end());
        for (int i = 0; i < t.length(); i++)
        {
            if (s[i] != t[i])
                return t[i];
        }
        //if none found 
        return '' ;
    }
};

int main()
{
    Solution s;
    cout << s.findTheDifference("","y");
    return 0;
}