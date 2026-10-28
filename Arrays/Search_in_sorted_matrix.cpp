#include<iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int i =0;
    int j= m-1;
    while(i<n && j>=0){
        if(mat[i][j] == key){
            return true;
        }else if(mat[i][j] > key){
            // go down 
            i++;
        }else{
            //go left 
            j--;
        }
    }
    return -1;
}

