class Solution(object):
    def titleToNumber(self, c):
        ans=0
        for i in c:
            ans=ans* 26+(ord(i)-64)
        return ans
        
