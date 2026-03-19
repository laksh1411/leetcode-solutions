class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            vector<int> alpha(26,0);
            for(int j=i;j<n;j++){
                alpha[s[j]-'a']++;
                int maxi=0,mini=INT_MAX;
                for(int f:alpha){
                    if(f>0){
                        mini=min(mini,f);
                        maxi=max(maxi,f);
                    }
                }
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};
