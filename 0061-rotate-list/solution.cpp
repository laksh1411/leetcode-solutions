class Solution {
public:
    ListNode* reverse(ListNode* curr,ListNode* end){
        ListNode* prev=NULL;
        while(curr!=end){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        k = k % n;
        if (k == 0) return head;
        head=reverse(head,temp);

        ListNode* temp2=head;
        for(int i=1;i<k;i++){
            temp2=temp2->next;
        }
        ListNode* sec=temp2->next;
        temp2->next=NULL;

        head=reverse(head,NULL);
        sec=reverse(sec,NULL);

        ListNode* temp3=head;
        while(temp3->next!=NULL){
            temp3=temp3->next;
        }
        temp3->next=sec;
        return head;
    }
};
