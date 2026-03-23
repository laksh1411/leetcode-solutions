class Solution:
    def countDigits(self, num: int) -> int:
        a=num
        count=0
        while a>0:
            c=a%10
            if num%c==0:
                count+=1
            a//=10
        return count
        
