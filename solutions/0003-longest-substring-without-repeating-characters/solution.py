class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp={}
        r=l=0
        maxi=0
        while r<len(s):
            if s[r] in mp and mp[s[r]] >= l:
                l=mp[s[r]]+1
            maxi=max(maxi,r-l+1)
            mp[s[r]]=r
            r+=1
        return maxi
        
        
