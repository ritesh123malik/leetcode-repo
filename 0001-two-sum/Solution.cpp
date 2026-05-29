class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int j;
        int n=nums.size();
        int row=0;
        int column=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                   row=i;
                     column=j;
                }
            }
        }
        return {row,column};
    }
};