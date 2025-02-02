//import java.util.Arrays;
class Solution {
    public int heightChecker(int[] h) {
        //int b=h.length;
        int arr[] = h.clone();
        Arrays.sort(arr);
        int count=0;
        for(int i=0;i<h.length;i++){
            if(arr[i]!=h[i]){
                count++;
            }
        }
        return count;
    }
}
