class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        int n=nums.size();
        
        int count=1;
        int k=1;
        for(i=1;i<n;i++){
            if(nums[i-1] !=nums[i]){
                count++;
               
                nums[k]=nums[i];
                 k++;
            }
        }
       return count; 
    }
    
};