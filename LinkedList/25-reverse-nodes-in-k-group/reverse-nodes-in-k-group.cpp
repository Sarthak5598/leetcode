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
    int length(ListNode* head){
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode* reverseK(ListNode* head, int k,int len) {
        if(head==NULL|| len<k||k==1||head->next==NULL){
            return head;
        }
      ListNode* curr=head;
      ListNode* prev=NULL;
      int count=0;
      ListNode* next=NULL;
      while(curr != NULL && count < k){
          next = curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
          count++;
      }
      if(next != NULL && count == k){
      head->next = reverseK(next,k,(len-k));  
    }
    return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       int len= length(head);
       head=reverseK(head,k,len);
    return head;
    }
};