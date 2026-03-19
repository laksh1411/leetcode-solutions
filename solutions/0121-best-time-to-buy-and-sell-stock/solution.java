class Solution {
    public int maxProfit(int[] p) {
        int min=p[0],max=0;
        for(int i=0;i<p.length;i++){
            min=Math.min(min,p[i]);
            max=Math.max(max,p[i]-min);
        }
        return max;
         
    }
}
