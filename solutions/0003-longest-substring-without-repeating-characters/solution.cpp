class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int r=0,l=0,maxlen=0;
        int n=s.size();
        while(r<n){
            if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l){
                l=mp[s[r]]+1;
            }
            maxlen=max(maxlen,r-l+1);
            mp[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};
