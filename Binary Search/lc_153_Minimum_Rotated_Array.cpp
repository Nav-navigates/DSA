#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        // Binary search loop
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // If mid element is greater than the high element,
            // the minimum must be in the right unsorted part.
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            // If mid element is less than or equal to the high element,
            // the mid itself could be the minimum, or it lies to the left.
            else {
                high = mid;
            }
        }
        
        // low and high converge to the minimum element
        return nums[low];
    }
};