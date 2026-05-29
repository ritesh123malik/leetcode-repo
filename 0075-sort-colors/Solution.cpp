class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int c1=0;
        int c2=0;
        int c3=0;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                c1++;
            }
            else if(nums[i]==1){
                c2++;
            }
            else if(nums[i]==2){
                c3++;
            }

        }
        for(i=0;i<n;i++){
            if(i<=c1-1&&i<n){
                nums[i]=0;
            }
            else if(i>=c1&&i<c1+c2){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }
        for(i=0;i<n;i++){
            cout<<nums[i];
        }
    }
};