class Solution {
public:
    int findMin(vector<int>& nums) {
        int i;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};