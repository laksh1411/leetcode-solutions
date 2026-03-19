class Solution {
public:
    bool prime(int a){
        if(a < 2) return false;
        for(int i=2;i<a;i++){
            if(a%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++){
            int a=__builtin_popcount(i);
            if(prime(a)) c++;
        }
        return c;
    }
};
