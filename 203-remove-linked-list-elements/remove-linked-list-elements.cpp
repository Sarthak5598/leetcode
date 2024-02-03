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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val){
            ListNode* Temp=head;
            head=head->next;
                delete(Temp);

        }
        ListNode* curr = head;
        while(curr!=NULL){
            if((curr->next!=NULL)&&curr->next->val==val){
                ListNode* fast=curr->next->next;
                ListNode* ToDelete=curr->next;
                delete(ToDelete);
                curr->next=fast;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};