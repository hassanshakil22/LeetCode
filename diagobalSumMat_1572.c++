#include<iostream>
#include<vector>


using namespace std;
class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            int rows = mat.size();
            int cols = mat[0].size();
            int sum=0;
            for(int row = 0 ; row < rows ; row++){
                for(int col = 0 ; col <  cols ; col++){
                    if (row==col || (row + col) == rows-1 ) 
                    sum+= mat[row][col];
                }   
            }
            
        }
    };