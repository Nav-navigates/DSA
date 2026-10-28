#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        int sr=0;
        int er= m-1;
        int sc=0; 
        int ec= n-1;
        vector<int> ans;
        while(sr<= er && sc <= ec){
            for(int j=sc; j<=ec; j++){
                ans.push_back(matrix[sr][j]);
            }
            for(int i=sr+1; i<= er; i++){
                ans.push_back(matrix[i][ec]);
            }
            if(sr<er){
            for(int j=ec-1; j>=sc; j--){
                
                ans.push_back(matrix[er][j]);
                
            }
            }
            if(sc<ec){
            for(int i=er-1; i>= sr+1; i--){
                
                ans.push_back(matrix[i][sc]);

            }
            }
            sr++;
            sc++;
            er--;
            ec--;
        }
        return ans;
    }
    
    
    
};