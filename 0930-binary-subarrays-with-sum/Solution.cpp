class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return totalvalues(nums,goal)-totalvalues(nums,goal-1);
    }
       
       int totalvalues(vector<int>&nums, int goal){ int count=0;
        int left=0;
        int right=0;
        int maxi=0;
        int n=nums.size();
        int i;
        int sum=0;
        for(right=0;right<n;right++){
            if(goal<0) return 0;
            sum=sum+nums[right];
            
            while(sum>goal){
                sum=sum-nums[left];
                left++;
            }
            count=count+(right-left+1);
        }
        return count;
    }
    
};