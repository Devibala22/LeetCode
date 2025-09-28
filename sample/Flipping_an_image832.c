/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
    int m=imageSize;
    int n=imageColSize[0];
    int i;
    int j;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        (*returnColumnSizes)[i] = n;
    }
    for(i=0;i<m;i++){
        for(j=0;j<(n+1)/2;j++){
            int temp=image[i][j];
            image[i][j]=image[i][n-j-1];
            image[i][n-j-1]=temp;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(image[i][j]==1){
                image[i][j]=0;
            }
            else{
                image[i][j]=1;
            }
        }
    }
   *returnSize = m;
    return image;
}
