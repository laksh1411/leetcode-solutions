class Solution {
    public int singleNumber(int[] n) {
        int a=0;
        for(int i=0;i<n.length;i++){
            int count =0;
            for(int j=0;j<n.length;j++){
                if(n[i]==n[j]) count++;
            }
            if(count==1) a=n[i];
        }
        return a;
    }
}
