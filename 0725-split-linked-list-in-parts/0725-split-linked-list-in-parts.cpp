class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            temp = temp->next;
            n++;
        }

        vector<ListNode*> ans;
        int size = n / k;
        int rem = n % k;
        temp = head;

        for (int j = 0; j < k; j++) {
            int s = size;
            if (rem > 0) {
                s++;
                rem--;
            }

            if (temp == NULL) {
                ans.push_back(NULL);
                continue;
            }

            ListNode* c = new ListNode(100);
            ListNode* tempc = c;

            for (int i = 0; i < s; i++) {
                tempc->next = temp;
                temp = temp->next;
                tempc = tempc->next;
            }

            tempc->next = NULL;
            ans.push_back(c->next);
        }

        return ans;
    }
};