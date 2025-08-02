/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, 
nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int left=m-1; //left means nums1
        int right=n-1; //right means nums2
        int total=m+n-1;
      //equality is put because we have already decreased one in left and right
      // as nums 1 is greater so we will keep running this loop till nums2 gets empty and all it's elements are in place in nums2 array
        while(right>=0){
            if(left>=0&&nums1[left]>nums2[right]){
                nums1[total--]=nums1[left--]; //places elements on the right order before decrementing the pointers
            }
            else{
                nums1[total--]=nums2[right--];
            }
        }
        
    }
};
