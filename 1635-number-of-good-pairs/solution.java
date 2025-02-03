class Solution {
    public int numIdenticalPairs(int[] nums) {
        int b=nums.length,c=0;
        for(int i=0;i<b;i++){
            for(int j=i+1;j<b;j++){
                if(nums[i]==nums[j])
                c++;
            }
        }
        return c;
    }
}
