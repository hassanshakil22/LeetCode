    #include <iostream>
    class Solution {
        public:
            uint32_t reverseBits(uint32_t n) {
                uint32_t reversed = 0 ;
                for (size_t i = 0; i < 32 ; i++)
                {
                    reversed = reversed << 1; // shifting it one place left 
                    reversed = reversed | (n&1); 
                    n = n>>1  // now assigning the last bit as the prevvious one
                }
                return reversed ;

            }
        };
