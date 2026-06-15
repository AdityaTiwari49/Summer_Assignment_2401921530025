class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* prev=NULL;
        ListNode* curr = head;

        while(curr!=NULL){
            ListNode* frr = curr->next;
            curr->next=prev;
            prev=curr;
            curr=frr;
            //frr=curr->next;
        }
        // head=curr;
        return prev;
    }
};