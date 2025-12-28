    #include <iostream>
    #include <vector>
    class Solution {
        public:
            int removeDuplicates(vector<int>& nums) {
                vector<int> removed = nums ;
                for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i; j < nums.size(); j++)
                {
                    if (nums[i]==nums[j])
                    {
                        nums.erase(nums.begin() + j)                }
                    
                }
                
            }
            
            return removed;
            }
        };
