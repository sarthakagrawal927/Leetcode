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
    ListNode* reverse(ListNode* node){
        ListNode* curr = node, *prev = NULL, *next = NULL;
        while(curr){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while(slow && fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        slow = reverse(slow);
        ListNode* temp = head;
        int maxSum = INT_MIN;
        while(temp && slow){
            maxSum = max(maxSum, temp -> val + slow -> val);
            temp = temp -> next, slow = slow -> next;
        }
        return maxSum;
    }  
};