#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
            vector<vector<int>> mat(m , vector<int>(n,0));
        int l = original.size();
        int k =0;
        if(l != m*n){
                    return {};
                }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                mat[i][j] = original[k];
                k++;
            }
        }
        return mat;
    }
};