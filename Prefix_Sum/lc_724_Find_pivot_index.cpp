#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    for(int i=0; i< nums.size(); i++){
        totalSum+= nums[i];
    }
    int leftsum = 0;
    for(int i=0; i< nums.size(); i++){
    int rightsum = totalSum - leftsum - nums[i];
    if(leftsum == rightsum){
        return i;
    }else{
        leftsum += nums[i];
    }
    
    }
    return -1;
    }
    
};