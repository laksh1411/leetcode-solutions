class Solution:
    def sortColors(self, nums: List[int]) -> None:
      st=0
      mid=0
      end=len(nums)-1
      while mid<=end:
        if nums[mid]==0:
            nums[st],nums[mid]=nums[mid],nums[st]
            st+=1
            mid+=1
        elif nums[mid]==1:
            mid+=1
        else:
            nums[mid],nums[end]=nums[end],nums[mid]
            end-=1
        
