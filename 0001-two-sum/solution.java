class Solution {
    public int[] twoSum(int[] n, int target) {
        int sum=0,k=0;
        int arr[]=new int[2];
        for(int i=0;i<n.length;i++){
            sum=0;
            for(int j=i+1;j<n.length;j++){
                sum=n[i]+n[j];
                if(sum==target){
                    arr[k]=i;
                    arr[++k]=j;
                    //return arr;
                    break;
                }
            }
        }
        return arr;
    }
}
