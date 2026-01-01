class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size());
        vector<int> result;
        vector<int> suff(nums.size());
        // prefix array creation :
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                pref[0] = 1;
            } else {
                pref[i] = pref[i - 1] * nums[i - 1];
            // cout << "pref[i] = pref[i - 1] * nums[i - 1] --> "
            //      << pref[i - 1] * nums[i - 1] << endl;
            }
        }
        // suffix array creation :
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                suff[nums.size() - 1] = 1 ;
            } else {
                suff[i] = suff[i + 1] * nums[i + 1];
                // cout << "suff[i] = suff[i + 1] * nums[i + 1] --> "
                //  << suff[i + 1] * nums[i + 1] << endl;
            }
        }

        // result array creation :
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(pref[i] * suff[i]);
            // cout << "result = pref[i] * suff[i] --> " << pref[i] * suff[i] << endl;
        }
        return result;
    }
};