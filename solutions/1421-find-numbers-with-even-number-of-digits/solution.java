class Solution {
    public int findNumbers(int[] n) {
        int c=0;
        int b=n.length;
        for(int i=0;i<b;i++){
            int count=0;
            for(int j=n[i];j>0;j/=10){
                //int d=j%10;
                count++;
            }
            if(count%2==0) c++;
        }
        return c;
    }
}
