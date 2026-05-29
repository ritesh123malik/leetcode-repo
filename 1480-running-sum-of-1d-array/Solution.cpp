class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        int n;
        int sum=0;
        
        n=nums.size();
        for(i=0;i<n;i++){
            sum=sum+nums[i];
            nums[i]=sum;

        }
         return nums;
        
    }
};