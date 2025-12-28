class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string result;

        for (int i = 0; i < numRows; i++) {
            int idx = i;
            int lengthSouth = 2 * (numRows - 1 - i); // below the current row
            int lengthNorth = 2 * (i);               // above the current row
            bool goingSouth = true;  // initially we calculate downwards
            while (idx < s.size()) { // iterate until we exceed the s.length
                result.push_back(s[idx]);
                if (i ==
                    0) { // if row is zeroith no need to calculate lengthNorth
                    idx += lengthSouth;
                } else if (i == numRows - 1) { // if row is last no need to
                                               // calculate lengthSouth
                    idx += lengthNorth;
                } else {
                    if (goingSouth) // if we are going south add south
                        idx += lengthSouth;
                    else // if we are going North add North
                        idx += lengthNorth;
                    goingSouth = !goingSouth;
                }
            }
        }
        return result;
    }
};