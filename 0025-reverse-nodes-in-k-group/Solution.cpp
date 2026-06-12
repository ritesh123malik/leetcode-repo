class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* curr=head;

        for(int i=0;i<k;i++){

            if(curr==NULL){
                return head;
            }

            curr=curr->next;
        }

        ListNode* prev=NULL;
        curr=head;

        for(int i=0;i<k;i++){

            ListNode* nxt=curr->next;

            curr->next=prev;

            prev=curr;
            curr=nxt;
        }

        head->next=reverseKGroup(curr,k);

        return prev;
    }
};