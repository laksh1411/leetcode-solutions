class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        if len(fruits)==1:
            return 1
        mp={}
        r=0
        l=0
        maxi=2
        while r<len(fruits):
            if fruits[r] in mp:
                mp[fruits[r]]+=1
            else:
                mp[fruits[r]]=1
            
            if len(mp)>2:
                mp[fruits[l]]-=1
                if mp[fruits[l]]==0:
                    del mp[fruits[l]]
                l+=1
            if len(mp)<=2:
                maxi=max(maxi,r-l+1)
            r+=1
        return maxi

        
