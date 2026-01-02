#include <unordered_map>
class Solution {
public:

    int repeatedNTimes(vector<int>& nums) {
   unordered_map<int, int> hash;
    for(int num : nums){
        hash[num]++ ;
    }
    int greatest = 0;
    int greatestNum = 0;

    for(auto& pair  : hash){
        if( pair.second > greatest){
            greatest = pair.second;
            greatestNum = pair.first;
            
        }
    }
    return greatestNum;
    }
};