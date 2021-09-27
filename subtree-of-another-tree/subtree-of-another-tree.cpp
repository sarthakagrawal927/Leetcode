class Solution {
public:
    bool isSame(TreeNode* t1,TreeNode* t2){
        if((t1 && !t2 ) || (!t1 && t2)) return false;
        if(!t1 && !t2) return true;
        return t1 -> val == t2 -> val && isSame(t1 -> left, t2 -> left) && isSame(t1 -> right, t2 -> right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode *> q;
        q.push(root);
        while(q.size()){
            TreeNode *temp = q.front(); q.pop();
            if(temp && subRoot && temp -> val == subRoot -> val && isSame(temp,subRoot)) return true;
            if(temp -> left ) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
        return false;
    }
};