class Solution {
public:
    int countVisiblePeople(int n, int pos, int k) {
        const int MOD=1e9+7;
        long long num=1,den=1;
        for(int i=0;i<k;i++){
            num=num*(n-1-i)%MOD;
            den=den*(i+1)%MOD;
        }
        long long inv=1,b=MOD-2;
        while(b){
            if(b&1) inv=inv*den%MOD;
            den=den*den%MOD;
            b>>=1;
        }
        return 2LL*num%MOD*inv%MOD;
    }
};
