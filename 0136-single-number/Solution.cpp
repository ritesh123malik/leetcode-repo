class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for (i=0;i<n-1;i++){
            if (nums[i]==nums[i+1]){
                i++;
            }
            else{
                return nums[i];
            }

        }
        return nums[n-1];
    }
};