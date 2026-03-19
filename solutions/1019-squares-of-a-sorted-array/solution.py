class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        ans=[0]*len(nums)
        st=0
        ed=len(nums)-1
        pos=len(nums)-1
        while st<=ed:
            if(abs(nums[st])>abs(nums[ed])):
                ans[pos]=nums[st]*nums[st]
                st+=1
            else:
                ans[pos]=nums[ed]*nums[ed]
                ed-=1
            pos-=1
        return ans
        
