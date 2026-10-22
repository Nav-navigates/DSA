#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int arr[heights.size()];
        int n = heights.size();
        for(int i=0; i<n; i++){
            arr[i] = heights[i];
        }
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j] , arr[j+1]);
                }
            }
        }
        int count =0;
        for(int i=0; i<n; i++){
            
            if(heights[i] != arr[i]){
                count ++;
            }
        }
        return count;
    }
};