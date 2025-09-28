int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum=0;
    int m=matSize;
    int n=matColSize[0];
    int i;
    for(i=0;i<n;i++){
        sum+=mat[i][i];
        sum+=mat[i][n-i-1];
    }
    if(n%2!=0){
        sum-=mat[n/2][n/2];
    }
    return sum;
}
