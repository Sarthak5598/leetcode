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
    ListNode* reverse(ListNode* l1){
        ListNode* curr=l1;
        ListNode* prev=NULL;
        ListNode* fast=NULL;
        while(curr!=NULL){
            fast=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fast;
        }
        return prev;
    }
    ListNode* sum(ListNode* rev1,ListNode* rev2){
        ListNode* dummy = new ListNode(0);
        ListNode* curr=dummy;
        int carry=0;
        while(rev1!=NULL||rev2!=NULL||carry!=0){
            int sum = (rev1!=NULL?rev1->val:0)+(rev2!=NULL?rev2->val:0)+carry;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            if(rev1!=NULL)rev1=rev1->next;
            if(rev2!=NULL)rev2=rev2->next;
        }
        return dummy->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rev1= reverse(l1);
        ListNode* rev2= reverse(l2);
        ListNode* head=sum(rev1,rev2);
        head=reverse(head);
        return head;
    }
};