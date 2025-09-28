int countlive(int **board,int m,int n,int i,int j){
    int live=0;
    for(int di=-1;di<=1;di++){
        for(int dj=-1;dj<=1;dj++){
            if(di==0 && dj==0){
                continue;
            }
            int ni=i+di;
            int nj=j+dj;
        
        if(ni>=0 && ni<m && nj>=0 && nj<n){
            live+=board[ni][nj]&1;
        }
    }
    }
    return live;
}
void gameOfLife(int** board, int boardSize, int* boardColSize) {
    int m=boardSize;
    int n=boardColSize[0];
    int life[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            int live=countlive(board,m,n,i,j);
            if(board[i][j]==1){
                
                if(live<2){
                    life[i][j]=0;
                }
                else if(live>=2 && live<=3){
                    life[i][j]=1;
                }
                else{
                    life[i][j]=0;
                }
            }
            else{
                if(live==3){
                    life[i][j]=1;
                }
                else{
                    life[i][j]=0;
                }
            }
        }
    }
        for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            board[i][j] = life[i][j];
        }
    }
    
}
