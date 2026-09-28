/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        int lenA=0;
        while(temp1!=NULL){
            lenA++;
            temp1=temp1->next;
        }
        ListNode* temp2=headB;
        int lenB=0;
        while(temp2!=NULL){
            lenB++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        int diff=abs(lenA-lenB);
        if(lenA>lenB){
            for(int i=0;i<diff;i++){
                temp1=temp1->next;
            }
            while(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }
        else{
            for(int i=0;i<diff;i++){
                temp2=temp2->next;
            }
            while(temp1!=temp2){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            return temp1;
        }


    }
};