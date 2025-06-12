// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.
If the array contains 0 in it as the value , then we cant reach the last posiion in the  array .

 

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int maxIndex;
            if(i > maxIndex){
               return false;
            }
            else{
                 maxIndex = max(maxIndex , i+nums[i]);
            }
        }
        return true;
    }
};