int cmp(const int *a,const int *b){
    return (*int)*a-(*int)*b;
}
int findLHS(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int maxlen=0;
    int min;
    int max;
    int left=0;
    int right=1;
    while(right<numsSize){
        min=nums[left];
        max=nums[right];
        if(max-min == 1){
            maxlen=right-left+1;
        }
       
    }
 
    
}
