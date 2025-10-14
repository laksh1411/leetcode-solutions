class Solution {
    public void merge(int[] arr, int m, int[] nums, int n) {
        int idx=n+m-1,i=m-1,j=n-1;
        while(i>=0 && j>=0){
            if(arr[i]>nums[j]){
                arr[idx--]=arr[i--];
            }
            else{
                arr[idx--]=nums[j--];
            }
        }
        while(j>=0){
            arr[idx--]=nums[j--];
        }
    }
}
