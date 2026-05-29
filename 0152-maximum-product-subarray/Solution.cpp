class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i;
        int n=nums.size();
        int finalpro=nums[0];
        int maxpro=nums[0];
        int minpro=nums[0];
    
        for(i=1;i<n;i++){
            int tempmax=maxpro;
            int tempmin=minpro;
           minpro=min(nums[i],min(tempmin*nums[i],tempmax*nums[i]));
           maxpro=max(nums[i],max(tempmin*nums[i],tempmax*nums[i]));
           finalpro=max(finalpro,maxpro);
        }
        return finalpro;
    }
};