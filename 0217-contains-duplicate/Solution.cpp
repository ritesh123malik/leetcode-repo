class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i;
        int n=nums.size();
         sort(nums.begin(),nums.end());
        for(i=1;i<n;i++){
           
            if(nums[i-1]==nums[i]){
                return true;
            }
        }
        return false;
    }
};