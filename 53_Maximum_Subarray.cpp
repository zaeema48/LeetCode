/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/
//in java
class Solution {
    public int maxSubArray(int[] nums) {
        int maxsum=nums[0];     //kadanes algo
        int currsum=nums[0];
        for(int i=1; i<nums.length; i++){
            if(currsum+nums[i]>nums[i])
                currsum=currsum+nums[i];
            else
                currsum=nums[i];
            if (currsum>maxsum)
                maxsum=currsum;
        }
        return maxsum;
    }
}