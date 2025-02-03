import java.util.Arrays;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        int count=0,b=nums.length;
        Arrays.sort(nums);
        for(int i=0;i<b-1;i++){
            if(nums[i]==nums[i+1])
            count++;
        }
        return count!=0;
    }
}
