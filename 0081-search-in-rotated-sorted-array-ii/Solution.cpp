class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int i;
        int n=nums.size();
        int mid;
        int r=n-1;
        sort(nums.begin(),nums.end());
        int l=0;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                return 1;
            }
            else if(nums[mid]<target){
                l=mid+1;
                
            }
            else if(nums[mid]>target){
                r=mid-1;
                
                
            }
            
        }
        return 0;
    }
};