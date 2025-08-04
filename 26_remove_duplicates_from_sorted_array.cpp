class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0;
        int n=nums.size();
        //we will start with j=1 as array is already sorted
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return (i+1);
        
    }
};
