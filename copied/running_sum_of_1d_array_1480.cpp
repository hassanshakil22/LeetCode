#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(nums.size());
        int sum = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            sum += nums[i];
            result[i] = sum;
        }
        return result;
    }
};
