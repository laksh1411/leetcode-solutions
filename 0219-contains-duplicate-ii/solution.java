import java.lang.Math;
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        int b=nums.length,l=0,m=0;
        if(b<=1) return false;
        for(int i=0;i<b;i++){
            for (int j = i + 1; j <= i + k && j < b; j++){
                if(nums[i]==nums[j]){
                    return true;
                    //break;
                }
            }
        }
        //System.out.print(Math.abs(l-m));
       
        return false;
    }
}
