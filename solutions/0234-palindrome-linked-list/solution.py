# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        temp=head
        arr=[]
        while temp!=None:
            arr.append(temp.val)
            temp=temp.next
        st=0
        ed=len(arr)-1
        while st<ed:
            if arr[st]!=arr[ed]:
                return False
            st+=1
            ed-=1
        return True
