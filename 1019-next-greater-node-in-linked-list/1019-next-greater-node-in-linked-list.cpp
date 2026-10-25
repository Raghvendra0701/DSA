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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        vector<int> ans(n,0);
        temp=head;
        for(int i=0;i<n;i++){
            ListNode* curr=temp->next;
            while(curr!=NULL){
                if(curr->val > temp->val){
                    ans[i]=curr->val;
                    break;
                }
                curr=curr->next;
            }
            temp=temp->next;
        }  
        return ans;  
            
    }
};