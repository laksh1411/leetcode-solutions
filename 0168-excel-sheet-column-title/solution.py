class Solution(object):
    def convertToTitle(self, c):
        s="";
        while c>0:
            s=chr(ord('A')+(c-1)%26)+s
            c=(c-1)//26
        return s
        
