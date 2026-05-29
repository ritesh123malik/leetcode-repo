class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i;
        int n=nums.size();
        int j;
        int diff=0;
        int maxdiff=-1;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    diff=nums[j]-nums[i];
                    if(diff>maxdiff){
                        maxdiff=diff;
                    }
                }
            }
        }
        return maxdiff;
    }
};