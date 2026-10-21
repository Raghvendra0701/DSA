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
    ListNode* partition(ListNode* head, int x) {
        ListNode* low=new ListNode(0);
        ListNode* high=new ListNode(1);
        ListNode* tl=low;
        ListNode* th=high;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val < x){
                tl->next=temp;
                tl=tl->next;
                temp=temp->next;
            }
            else{
                th->next=temp;
                th=th->next;
                temp=temp->next;
            }
        }
        tl->next=high->next;
        th->next=NULL;
        return low->next;

        
    }
};