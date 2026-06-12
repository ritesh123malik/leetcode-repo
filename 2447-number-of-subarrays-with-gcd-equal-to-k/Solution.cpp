class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int i;
        int j;
        int n=nums.size();
        int temp=0;
        int count=0;
        for(i=0;i<n;i++){
            int g=0;
            for(j=i;j<n;j++){
                g=gcd(g,nums[j]);
                if(g==k){
                    count++;
                }
                if(g<k){
                    break;
                }
            }
        }
        return count;
    }
};