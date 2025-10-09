class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int maxsum=Integer.MIN_VALUE;
        int csum=0;
        for(int i=0;i<n;i++){
            csum+=nums[i];
            if(maxsum<csum) maxsum =csum;
            if(csum<0){
                csum=0;
            }
        }
        return maxsum;
    }
}
