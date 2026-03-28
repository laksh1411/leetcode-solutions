class Solution {
public:
    int countArrays(vector<int>& a) {
        const int MOD = 1e9+7;

        vector<vector<int>> c(46);
        for(int i=0;i<=5000;i++){
            int s=0,x=i;
            while(x){ s+=x%10; x/=10; }
            c[s].push_back(i);
        }

        vector<long long> dp(5001,0);

        if(a[0]>45) return 0;
        for(int x:c[a[0]]) dp[x]=1;

        for(int i=1;i<a.size();i++){
            if(a[i]>45) return 0;

            vector<long long> pref(5002,0), ndp(5001,0);

            for(int j=0;j<=5000;j++)
                pref[j+1]=(pref[j]+dp[j])%MOD;

            for(int x:c[a[i]])
                ndp[x]=pref[x+1];

            dp=ndp;
        }

        long long ans=0;
        for(auto v:dp) ans=(ans+v)%MOD;
        return ans;
    }
};
