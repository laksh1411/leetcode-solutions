class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n=s.size(); int m=p.size();
        if(m>n) return ans;
        vector<int> freqs(26,0);
        vector<int> freqp(26,0);
        for(char c:p){
            freqp[c-'a']++;
        }
        int r=0,l=0;
        while(r<n){
            freqs[s[r]-'a']++;
            if(r-l+1>m){
                freqs[s[l]-'a']--;
                l++;
            }
            if(r-l+1==m && freqs==freqp) ans.push_back(l);
            r++;
        }
        return ans;
    }
};
