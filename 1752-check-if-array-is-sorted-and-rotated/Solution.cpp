class Solution {
public:
    bool check(vector<int>& nums) {
        int i;
        int x;
        int n=nums.size();
     vector<int> sorted = nums; 
        sort(nums.begin(),nums.end());
       
        for(i=0;i<n;i++){
            for(x=0;x<n;x++){
                if(sorted[x]!=nums[(i+x)%n]){
                   break;
                }
            }
            if(x==n) return 1;
        }
        return 0;
        
    }
};