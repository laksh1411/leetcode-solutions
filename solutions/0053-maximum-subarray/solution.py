class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum=0
        maxi=-1000000000
        for i in nums:
            sum+=i
            maxi=max(maxi,sum)
            if sum<0:
                sum=0
        return maxi

        
