/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
*/
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int y=0;
        for(int i=m; i<m+n; i++){
            nums1[i]=nums2[y];
            y++;
        }
        sort(nums1.begin(), nums1.end());
    }