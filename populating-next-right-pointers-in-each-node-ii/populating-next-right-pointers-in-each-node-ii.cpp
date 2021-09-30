/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        Node* node = root;
        queue<Node *> q;
        // taking NULL to point to
        q.push(node);
        q.push(NULL);
        while(q.size()){
            auto temp = q.front(); q.pop();
            if(temp){ // add pointer to next and add new nodes
                temp -> next = q.front();
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
            else{ // removed NULL, add back NULL in case something present
                if(q.size()) q.push(NULL);
            }
        }
        return root;
    }
};