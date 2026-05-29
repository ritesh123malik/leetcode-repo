class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=0;
        int final=INT_MIN;
        while(left<right){
            ans=(right-left)*(min(height[left],height[right]));
            final=max(ans,final);
        if(height[right]<height[left]){
            right--;
        }else{
            left++;
        }
        
       
        }
         return final;
    }
};