class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int mid;
        int n=nums.size();
        int low=0;
        int high=n-1;
        int i;
       while (low<=high){int mid=(low +high)/2;
        if (nums[mid]==target){
            return mid;
        }
        if (nums[mid]<target){
            low = mid+1;

        }
        if (target<nums[mid]){
            high =mid-1;
        
         
         }
       }
      return low;
    }
};