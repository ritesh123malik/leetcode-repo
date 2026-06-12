class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> next=board;
        int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};
        int i;
        int j;
        int k;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                int live=0;
                for(k=0;k<8;k++){
                    int nx=dx[k]+i;
                    int ny=dy[k]+j;
                    if(nx>=0&&nx<m&&ny>=0&&ny<n){
                        if(board[nx][ny]==1){
                            live++;
                        }
                    }
                }
            
        
        if(board[i][j]==1){
             if(live<2){
                        next[i][j]=0;
                    }
                    else if(live==2 || live==3){
                        next[i][j]=1;
                    }
                    else{
                        next[i][j]=0;
                    }
        }
         else{

                    if(live==3){
                        next[i][j]=1;
                    }
                    else{
                        next[i][j]=0;
                    }

                }
        
            }
        }
         board = next;
    }
};