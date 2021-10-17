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
    int count = 0;
    unordered_map<int,int> m;
    
    void helper(TreeNode* root, int ts, int curr){
        if(!root) return;
        
        curr += root -> val;
        
        if(curr == ts) count++;
        count += m[curr - ts];
        
        m[curr]++;
        
        helper(root -> left, ts, curr);
        helper(root -> right, ts, curr);
        
        m[curr]--;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        helper(root, targetSum, 0);
        m[0] = 1;
        return count;
    }
};