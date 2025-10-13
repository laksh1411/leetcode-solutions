class Solution {
    public int search(int[] arr, int target) {
        int n=arr.length;
        int st=0 ,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==arr[mid]){
                return mid;
                }
           if(arr[st]<=arr[mid]){
                if(target>=arr[st] && target<arr[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
           }
            else{
                if(target>arr[mid] && target<=arr[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;;
                }
            }
        }
        return -1;
    }
}
