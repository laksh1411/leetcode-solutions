class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int b=nums.length;
        int arr[]=new int[b];
        //int c=0;
        for(int i=0;i<b;i++){
            int c=0;
            for(int j=0;j<b;j++){
                if(nums[i]>nums[j]){
                    c++;
                }
                arr[i]=c;
            }
        }
        return arr;
    }
}
