/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.    */ 

class Solution {
    public int majorityElement(int[] nums) {
        HashMap < Integer, Integer> obj = new HashMap <> ();
        int value;
            for(int i = 0; i < nums.length ; i++) {
            if(obj.containsKey(nums[i])){
              value = obj.get(nums[i]);
                obj.put(nums[i], value+1);
            }
                else
                    obj.put(nums[i], 1); 
        }
        int maj = nums.length/2;
        int res = 0; 
        
        for(int j : obj.keySet()){
            if(obj.get(j)>maj)
                // res = j; 
                return j ;
        }
        return res; 
    }
}