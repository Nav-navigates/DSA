#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int sr= 0;
        int sc= 0;
        int er= n-1;
        int ec= n-1;
        int num=1;
        vector<vector<int>> matrix(n, vector<int>(n,0));
        while(sr <= er && sc <=ec){
            for(int j=sc; j<=ec; j++){
                matrix[sr][j] = num;
                num++;
            }
            for(int i=sr+1; i<=er; i++){
                 matrix[i][ec] = num;
                num++;
            }
            if(sc<ec){
                for(int j=ec-1; j>=sc; j--){
                    matrix[er][j] = num;
                    num++;
                }
            }
            if(sr < er){
                for(int i=er-1; i>=sr+1; i--){
                     matrix[i][sc] = num;
                num++;
                }
            }
            sr++;
            sc++;
            er--;
            ec--;
        }
        return matrix;
    }
};