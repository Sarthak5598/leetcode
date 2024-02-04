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
    bool isPalindrome(ListNode* head) {
        int mid,count=0;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL  && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        } 
        temp=slow->next;
        while(temp!=NULL){
            ListNode* fast= temp->next;
            temp->next=prev;
            prev=temp;
            temp=fast;
        }
        slow->next=prev;
        
        ListNode* head1=head;
        ListNode* head2=slow->next;
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