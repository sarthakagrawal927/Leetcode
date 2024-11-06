/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        for(auto h = head; h; h = h->next){
            if(h -> child){
                auto next = h -> next;
                h -> next = h -> child;
                h -> next -> prev = h;
                h -> child = NULL;
                auto p = h -> next;
                while(p -> next) p = p->next;
                p -> next = next;
                if(next) next -> prev = p;
            }
        }
        return head;
    }
};