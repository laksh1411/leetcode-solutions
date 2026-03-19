class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        for(int i=x;i>0;i=i/10){
            int c=i%10;
            rev=rev*10+c;
        }
        if(rev==x) return true;
        else return false;
    }
};
