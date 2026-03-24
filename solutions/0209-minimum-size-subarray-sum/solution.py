class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l=0
        r=0
        maxi=100000000
        sum1=0
        while r<len(nums):
            sum1+=nums[r]
            while sum1>=target:
                maxi=min(maxi,r-l+1)
                sum1-=nums[l]
                l+=1
            r+=1
        if maxi==100000000:
            return 0
        return maxi

        
