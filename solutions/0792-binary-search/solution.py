class Solution(object):
    def search(self, nums, target):
        st=0
        end=len(nums)-1
        # if len(nums)==1:
        #     return nums[]
        while st<=end:
            mid=st+(end-st)/2
            if nums[mid]==target:
                return mid
            elif nums[mid]>target:
                end=mid-1
            else:
                st=mid+1
        return -1
            
                

        
