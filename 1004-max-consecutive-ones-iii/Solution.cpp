class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int maxi=0;
        int i;
        int count=0;
        int n=nums.size();
        for(right=0;right<n;right++){
            
                if(nums[right]==0){
                    count++;
                }
                while(count>k){
                    if(nums[left]==0){
                        count--;
                    }
                    left++;
                }
                int temp=right-left+1;
                maxi=max(temp,maxi);
                
            
        }
        return maxi;
        
    }
};