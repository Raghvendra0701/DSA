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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr=slow->next;
        ListNode* Next=slow->next;
        ListNode* prev=NULL;
        slow->next=NULL;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        ListNode* a=head;
        ListNode* b=prev;
        ListNode* neww =new ListNode(10);
        ListNode* temp=neww;
        while(b!=NULL){
            temp->next=a;
            a=a->next;
            temp=temp->next;
            temp->next=b;
            b=b->next;
            temp=temp->next;

        } 
        temp->next = a; 
    }
};