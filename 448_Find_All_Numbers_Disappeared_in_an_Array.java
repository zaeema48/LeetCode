// Given an array nums of n integers where nums[i] is in the range [1, n], 
// return an array of all the integers in the range [1, n] that do not appear in nums.

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        HashSet<Integer>obj=new HashSet<>();
        for(int i : nums){
            obj.add(i); 
        }
        LinkedList<Integer>res=new LinkedList<>();
        for(int i=1; i<=nums.length; i++ ){
            if(!obj.contains(i))
               res.add(i);
        }
        return res;
    }
}