#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                {
                    nums[i]=nums[i+1];
                    nums[i+1]=0
                }
                
            }
            
        }
    };