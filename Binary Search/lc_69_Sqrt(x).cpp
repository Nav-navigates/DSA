#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        //already known quantities
        if(x == 0 || x == 1){
            return x;
        }
        int ans;
        int left =1; int right = x;
        
        while(left <=right){
             int mid = left + (right - left)/2; //this is for value overflow
            if(mid <= x/mid){
                // again value overflow if mid*mid
                ans = mid;
                left = mid +1;
            }else{
                right = mid -1;
            }
        }
        return ans;
    }
};