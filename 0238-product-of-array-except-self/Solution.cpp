class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> final(n,1);
        int prefix=1;
        int i;
        for(i=0;i<n;i++){
            final[i]=prefix;
            prefix=prefix*nums[i];
        }
        int suffix=1;
        for(i=n-1;i>=0;i--){
            final[i]=final[i]*suffix;
            suffix=suffix*nums[i];
        }
        return final;
    }
};