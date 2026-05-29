class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i;
        int n=nums.size();
        vector<int> arr(2*n);
        for(i=0;i<2*n;i++){
            if(i<n){
            arr[i]=nums[i];
            }
            else{
                arr[i]=nums[i-n];
            }
        }
        return arr;
        
    }
};