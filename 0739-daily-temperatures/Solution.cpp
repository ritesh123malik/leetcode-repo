class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;
        int i;
        for(i=0;i<n;i++){
            while(st.empty()==0&&temperatures[st.top()]<temperatures[i]){
                int index=st.top();
                st.pop();
                ans[index]=i-index;
            
            }
            st.push(i);
        }
    return ans;
    }
    
};