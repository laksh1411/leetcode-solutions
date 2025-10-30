class Solution {
    public void reverseString(char[] s) {
        int c=s.length,k=0;
        char[ ] a=new char[c];
        for(int i=c-1;i>=0;i--){
            a[k]=s[i];
            k++;
        }
        for(int i=0;i<c;i++){
            s[i]=a[i];
        }
    }
}
