class Solution {
public:

    ListNode* reverse(ListNode* head){

        ListNode* prev=NULL;
        ListNode* curr=head;

        while(curr){

            ListNode* nxt= curr->next;

            curr->next=prev;

            prev=curr;
            curr=nxt;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head){

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast && fast->next){

            slow=slow->next;
            fast= fast->next->next;
        }

        ListNode* secondHalf = reverse(slow);

        ListNode* firstHalf = head;

        while(secondHalf){

            if(firstHalf->val != secondHalf->val){
                return false;
            }

            firstHalf= firstHalf->next;
            secondHalf= secondHalf->next;
        }

        return true;
    }
};