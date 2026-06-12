class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int i=0;
        int n=nums.size();
        vector<int> v;
        int count=0;
        

        for(i=0;i<n;i++){
            
            if(i==0||nums[i]!=nums[i-1]){
                count=1;
            }else{
                count++;
            }
            if(count<=k){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};