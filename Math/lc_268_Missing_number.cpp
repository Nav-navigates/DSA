#include<iostream>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int totalSum = (n*(n+1))/2;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum+ nums[i];
        }
        int missing = totalSum - sum;
        return missing;
    }
    
};