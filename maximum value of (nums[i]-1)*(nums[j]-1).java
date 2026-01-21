class Solution {
    public int maxProduct(int[] nums) {
        int n=nums.length;
        int i=0;
        int j=0;
        int max=nums[0];
        int secondmax=0;
        int p,k;
        for(p=1;p<n;p++){
            if(nums[p]>max){
                max=nums[p];
                i=p;
            }
            
        }
        for(k=0;k<n;k++){
            if(k==i){
                continue;
            }
            else{
                if(nums[k]>secondmax){
                    secondmax=nums[k];
                    j=k;
                }
            }
        }
        return (nums[i]-1)*(nums[j]-1);
    }
}
