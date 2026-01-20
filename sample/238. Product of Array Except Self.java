class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int[] result = new int[n];

        int i=0;
        while(i<n){
            int j=0;
            int pro=1;
            while(j<n){
                
                if(j!=i){
                   pro*=nums[j];
                }
                j=j+1;
            }
            result[i]=pro;
            i=i+1;
        }
        return result;
    }
}
