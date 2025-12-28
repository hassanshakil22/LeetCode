#include<vector>
using namespace std;

class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int count=0,total_count=0;
            for(int i=0;i<nums.size();i++){
                int temp=nums[i];
                count=0;
                while(temp!=0){
                    int x=temp%10;
                    count++;
                    temp=temp/10;
                }
                if(count%2==0){
                    total_count++;
                }
                
            }
            return total_count;
            
        }
    };