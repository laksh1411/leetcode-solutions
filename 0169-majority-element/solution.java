import java.util.Arrays;
class Solution {
    public int majorityElement(int[] arr) {
        Arrays.sort(arr);
        return arr[arr.length/2];
//         int n=arr.length;
//         for(int i=0;i<n;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         int ans=arr[0]; int freq=1;
//         for(int i=0;i<n;i++){
//             if(arr[i]==arr[i-1]) freq++;
//             else{
//                 freq=1;
//                 ans=arr[i];
//             }
//         }
//         if(freq>n/2) return ans;
    }
    
}
