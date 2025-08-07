class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n=nums.size();
        int j=-1;

        //this loops checks the occurrence of first zero, points j to first zero so that we can swap non zero pointing i to zero pointing j
        for(int i=0;i<n;i++){
            if (nums[i]==0){
                j=i;
                break;
            }
        }
        if (j>=0){

            //i added j>=0 condition so that if there are no zeroes then there is no need to go inside this loop
            for(int i=j;i<n;i++){
                if(nums[i]!=0){
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
        
        
    }
};
