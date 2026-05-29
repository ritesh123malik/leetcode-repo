class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int count=0;
        int j=0;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==1){
            count++;
         j=max(j,count);
        }
        
         else {
             count=0;
          }
        }
        return j;
    }
};