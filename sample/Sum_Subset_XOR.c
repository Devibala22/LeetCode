int subsetXORSum(int* nums, int numsSize) {
    int xorval=0;
    for(int i=0;i<numsSize;i++){
        xorval|=nums[i];
    }
    return xorval*(1<<(numsSize-1));
}
