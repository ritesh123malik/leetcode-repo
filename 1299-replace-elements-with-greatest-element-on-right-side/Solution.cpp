class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i;
        int j;
        
        int currtemp=0;
        
        int n=arr.size();
        int tempmax=arr[n-1];
        vector<int> ans(n,0);
        ans[n-1]=-1;
        for(i=n-2;i>=0;i--){
            ans[i]=tempmax;
            tempmax=max(tempmax,arr[i]);
        }
          
        return ans;

    }
};