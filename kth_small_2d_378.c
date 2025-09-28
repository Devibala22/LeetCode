int cmp(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}
int kthSmallest(int** matrix, int matrixSize, int* matrixColSize, int k) {
    int m=matrixSize;
    int n=matrixColSize[0];
    int i,j;
    int p=m*n;
    int arr[p];
    int ind=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[ind++]=matrix[i][j];
        }
    }
qsort(arr,p,sizeof(int),cmp);
int kth_distinct_element=arr[k-1];
return kth_distinct_element;
}
