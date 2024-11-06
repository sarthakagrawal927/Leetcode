/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*,TreeNode*>> stk;
        stk.push({p,q});
        while(stk.size()){
            auto t = stk.top(); stk.pop();
            auto p1 = t.first, q1 = t.second;
            
            if(!p1 && !q1) continue;
            else if((!p1 || !q1) || (p1 -> val != q1 -> val)) return false;
            stk.push({p1 -> left, q1-> left});
            stk.push({p1 -> right, q1 -> right});
        }
        return true;
    }
};