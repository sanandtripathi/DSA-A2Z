// brute force approach is to store array from 0 to d-1 in temp, then shift the remaining array from 0 to d, and again copy from temp to original array from n-d to n-1
// this method will have around O(n+d) TC where  d is no. of rotations, but SC will be around O(d) as we are using another array
// optimal solution will be to reverse 0 to d-1, then from d to n-1 then from 0 to n-1 either by using reverse STL or reverse function, t his is for lefet rotate
// for right rotate we will go from 0 to n-d-1, and again from n-d to n-1 then from 0 to n-1.
class Solution {
public:

void reverse_func(vector<int>&nums, int a, int b){
    while(a<b){
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
        a++;
        b--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n; // added so that if n=5 and you want to rotate 6 times, then basically after 6 rotations you will get the same array, so taking modulo
        if(k<n){
        // added because if there is only one element, say [1], and you want to rotate it twice, so 2%1==2, but it will cause overflow, as our 1-2==-1 which does not exist    

        reverse_func(nums, 0, n-k-1 );
        reverse_func(nums, n-k, n-1);
        reverse_func(nums, 0, n-1);}

        
        
    }
};
