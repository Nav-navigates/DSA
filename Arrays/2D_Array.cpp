#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m){
    int sr = 0;
    int er = n-1;
    int sc = 0;
    int ec = m-1;
    while(sr<=er && sc<= ec){ // for  odd matrix, we need to check for sr<=er and sc<=ec
           //top 
    for(int j=sc; j<=ec; j++ ){
        cout << matrix[sr][j] << " ";
    }
    //right
    for(int i= sr+1; i<=er; i++){
        if(sc==ec){ // for odd matrix, we need to check for sc==ec
            break;
        }
        cout << matrix[i][ec] << " ";

    }
    // bottom
    for(int j=ec-1; j>=sc; j--){
        if(sr==er){ // for odd matrix, we need to check for sr==er
            break;
        }
        cout << matrix[er][j] << " ";
    }
    //left
    for(int i= er-1; i>= sr+1; i--){
        cout << matrix[i][sc] << " ";
    }
    sr++;
    er--;
    sc++;
    ec--;
}
}

int main(){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralMatrix(matrix, 4,4);
    return 0;
}

