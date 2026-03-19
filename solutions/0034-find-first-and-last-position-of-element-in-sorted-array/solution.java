class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] arr=new int[]{-1,-1};
        int st=0,end=nums.length-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                arr[1]=mid;
                st=mid+1;
            } 
            else if(nums[mid]>target) end=mid-1;
            else st=mid+1;
        }
        st=0;end=nums.length-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                arr[0]=mid;
                end=mid-1;
            } 
            else if(nums[mid]>target) end=mid-1;
            else st=mid+1;
        }
        return arr;
    }
}
