# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        slow=head
        fast=head
        temp=head
        while fast!=None and fast.next!=None:
            slow=slow.next
            fast=fast.next.next
        curr=slow.next
        slow.next = None 
        prev=None
        while(curr!=None):
            nex=curr.next
            curr.next=prev
            prev=curr
            curr=nex
        temp1 = head
        temp2 = prev
        while temp2:
            n1 = temp1.next
            n2 = temp2.next
            temp1.next = temp2
            temp2.next = n1
            temp1 = n1
            temp2 = n2
