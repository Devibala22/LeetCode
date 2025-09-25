int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
void precompute(int *pow2,int numsSize){
    pow2[0]=1;
    for(int i=1;i<numsSize;++i){
        pow2[i]=(2*pow2[i-1])%1000000007;
    }
}
int numSubseq(int* nums, int numsSize, int target) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int left = 0;
    int right=numsSize-1;
    int res=0;
    int *pow2 = (int *)malloc(numsSize * sizeof(int));
    precompute(pow2,numsSize);
    while(left<=right){
        if(nums[left]+nums[right]<=target){
            res=(res+pow2[right-left])%1000000007;
            left++;
        }
        else{
            right--;
        }
    }
return res;
}
