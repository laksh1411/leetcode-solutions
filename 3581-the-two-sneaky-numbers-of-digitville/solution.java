import java.util.Arrays;
class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        int c=0,b=nums.length;
        int arr[]=new int[2],k=0;
        Arrays.sort(nums);
        for(int i=0;i<b-1;i++){
            if(nums[i]==nums[i+1]){
                arr[k]=nums[i];
                k++;
            }

        }
        return arr;
    }
}
