class Solution {
    public int addDigits(int num) {
        int sum=0;
        while(num>=10){
            sum=0;
            while(num>0){
                int c=num%10;
                sum+=c;
                num/=10;
            }
            num=sum;
        }
        return num;
    }
}
