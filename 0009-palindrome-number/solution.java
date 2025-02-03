class Solution {
    public boolean isPalindrome(int x) {
        int d=1;long a=0;int k=x;
        if(x<0) return false;
        while(x>0){
            d=x%10;
            a=a*10+d;
            x=x/10;
        }
        //System.out.println(a);
        return a==k;
    }
}
