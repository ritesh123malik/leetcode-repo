class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int correct;
        int n=nums.size();
     while (i<n){ correct =nums[i]-1;
              if (nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
              }else i++;
     
         
                
            
        }
         {
            if (i !=correct){
                return nums[correct];
            }
     }

        return -1;
    }
};