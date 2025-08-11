// this is not the best approach but pretty straight forward, using the concept of hashing

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int >mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){

            int first=nums[i];
            int remaining = target-first;
            if(mpp.find(remaining)!=mpp.end()){
                return {mpp[remaining], i};
            }
            mpp[first]=i;


        }
        return {-1,-1};}
        
    
};
