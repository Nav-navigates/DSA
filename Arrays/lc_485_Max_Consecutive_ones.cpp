#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxsum = INT_MIN;
        int currsum = 0;
        for(int i=0; i< nums.size(); i++){
            if (nums[i] == 1){
            currsum += nums[i];
            maxsum = max(maxsum , currsum);
            }else{
                currsum = 0;
            }
        }
        return maxsum;
    }
};