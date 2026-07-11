#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]+ sum);
            sum=sum+ nums[i];
        }
        return ans;
    }
};