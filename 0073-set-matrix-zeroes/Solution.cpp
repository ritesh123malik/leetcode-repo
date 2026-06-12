class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i;
        int j;
        vector<int> index1(m,0);
        vector<int> index2(n,0);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]==0){
                    index1[i]=1;
                    index2[j]=1;
                }
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(index1[i]==1||index2[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
        return;
    }
};