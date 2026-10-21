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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd=new ListNode(0);
        ListNode* even=new ListNode(1);
        ListNode* o=odd;
        ListNode* e=even;
        ListNode* temp=head;
        int i=1;
        while(temp!=NULL){
            if(i%2!=0){
                o->next=temp;
                temp=temp->next;
                o=o->next;
            }
            else{
                e->next=temp;
                temp=temp->next;
                e=e->next;
            }
            i++;
            
        }
        o->next=even->next;
        e->next=NULL;
        return odd->next;
        
    }
};