class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ms=0;
        for(int i=0;i<n;i++){
            vector<int> ans(256,0);
            int count=0;
            for(int j=i;j<n;j++){
                if(ans[s[j]]==1)break;
                ans[s[j]]=1;
                count++;
            }
            ms=max(ms,count);
        }
        return ms;
    }
};
