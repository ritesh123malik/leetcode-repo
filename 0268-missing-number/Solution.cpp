class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int i=0;
        int n=nums.size();
        int correct;
        while (i<n){
            correct=nums[i];
            if (correct<n && nums[i] !=nums[correct]){
                swap(nums[i],nums[correct] );
            }
        
              else{i++;}
        }
             
             for(i=0;i<n;i++){if (nums[i] != i)
             return i;
                }return n;
    }
            
    };

