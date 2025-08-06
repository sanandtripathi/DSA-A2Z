// i was earlier trying some brute force approach like
// first find the lowest element in array and return it's index
// then rotate the array from vector.begin() to +index, then from vector.begin()+index to .end(), then from begin( ) to end()
// this will give me the correct array, now check the condition of sorted array which is if arr[i]>arr[i-1] , return false
// but this solution is very complicated and may fail when there are several same elements like [10,1,1,10]
// better approach is check rotations and keep a count, like how many points are there where arr[i]>arr[i+1] and one end case conditions too
// end case if arr[n-1]>arr[0], if this value of count is greater than 1 then it is not sorted
// arr[n-1]>arr[0] is know as wrap around condition, and this count is called number of drops
// for one single for loop we can keep arr[i]>arr[(i+1)%n]-> we are using % because if i=n-1, then we need to check arr[n-1]>arr[0], so for that we will have arr[i+1]=arr[n] if i==n-1
// that is why (i+1)%n which will make it zero at i==n-1
class Solution {
public:
    bool check(vector<int>& nums) {

        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]) count++;

        }
        return count<=1;
        
    }
};
