void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int m=matrixSize;
    int n=matrixColSize[0];
    int i,j;
    for (i=0;i<m;i++){
        for(j=i+1;j<n;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n/2;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[i][n-j-1];
            matrix[i][n-j-1]=temp;
        }
    }
    
    
}
