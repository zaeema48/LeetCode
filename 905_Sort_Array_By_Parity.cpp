/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all
the odd integers.

Return any array that satisfies this condition.
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        for ( int j = 0; j<nums.size(); j++){
            if(nums[j]%2==0){
                swap(nums[i], nums[j]);
                    i++;
            }
        }
        return nums;
    }
};