#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int lastNonZeroFoundAt = 0;

        // Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                nums[lastNonZeroFoundAt++] = nums[i];
            }
        }

        // Fill remaining positions with 0
        for (int i = lastNonZeroFoundAt; i < nums.size(); ++i)
        {
            nums[i] = 0;
        }
    }
};