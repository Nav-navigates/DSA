#include<iostream>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        int i=0; 
        int j= n-1;
        while(i<m && j>=0){
            if(matrix[i][j] == target){
                return true;
            }else if(matrix[i][j] < target){
                //move down
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};