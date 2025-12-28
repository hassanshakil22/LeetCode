
#include <vector>
using namespace std;
class Solution {
    // [1,2,3,4,4,5,6,3,5,6]
    public:
        int singleNumber(vector<int>& nums) {
        int ans = 0 ;
        for (int i : nums)
        {
            ans^=i;
        }
        return ans;
        
        }
    };