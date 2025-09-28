/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int m=matrixSize;
    int n=matrixColSize[0];
    int i,j;

    int left=0;
    int top=0;
    int right=n-1;
    int bottom=m-1;
    int *arr = (int*) malloc(m * n * sizeof(int));
   
    int ind=0;
    while(left<=right && top<=bottom){
        for(i=left;i<=right;i++){
            arr[ind++]=matrix[top][i];
            
        }
         top++;
        for(j=top;j<=bottom;j++){
            arr[ind++]=matrix[j][right];
            
        }
        right--;
        if(top<=bottom){
            for(i=right;i>=left;i--){
                arr[ind++]=matrix[bottom][i];
                
            }
            bottom--;
        }
        if(left<=right){
            for(j=bottom;j>=top;j--){
                arr[ind++]=matrix[j][left];
               
            }
             left++;
        }
    }
     *returnSize = m * n;
return arr;
}
