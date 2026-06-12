class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i;
        int j;
        vector<vector<int>> ans;
        for(i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(j=1;j<i;j++){
                row[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(row);
        }
        return ans;
    }
};