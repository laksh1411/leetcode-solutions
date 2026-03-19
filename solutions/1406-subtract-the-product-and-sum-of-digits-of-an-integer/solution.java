class Solution {
    public int subtractProductAndSum(int n) {
        int sum=0,p=1;
        for(int i=n;i>0;i=i/10){
            int c=i%10;
            p*=c;
            sum+=c;
        }
        return p-sum;
    }
}
