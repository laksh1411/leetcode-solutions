class Solution {
    public int[] runningSum(int[] n) {
        //int arr[]=new int[n.length];
        for(int i=1;i<n.length;i++){
            n[i]=n[i]+n[i-1];
        }
        return n;
    }
}
