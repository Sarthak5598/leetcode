/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mid(ListNode* head){
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL  && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode * temp){
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* fast= temp->next;
            temp->next=prev;
            prev=temp;
            temp=fast;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {

        ListNode* Mid=mid(head);
        ListNode* temp=Mid->next;
        Mid->next=reverse(temp);        
        ListNode* head1=head;
        ListNode* head2=Mid->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head2=head2->next;
            head1=head1->next;
        }   
        return true;
    }
};