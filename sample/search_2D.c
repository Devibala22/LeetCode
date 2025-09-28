

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int m=matrixSize;
    int n=matrixColSize[0];
    int left=0;
    int right=m*n-1;
    int mid;
    while(left<=right){
        int mid=left+(right-left)/2;
        int row=mid/n;
        int col=mid%m;
        int val=matrix[row][col];
        if(val==target){
            return true;
        }
        else if(val<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return false;
}
