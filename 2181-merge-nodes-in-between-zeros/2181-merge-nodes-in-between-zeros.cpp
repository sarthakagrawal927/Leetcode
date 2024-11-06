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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr = head;
        ListNode *f = new ListNode();
        ListNode* ans = f;
        int val = 0;
        while(curr){
            if(curr -> val == 0) {
                f -> next = new ListNode(val);
                f = f -> next;
                val = 0;
            }
            else val += curr -> val;
            curr = curr -> next;
        }
        return ans -> next -> next;
    }
};