/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return Symm(root->left, root->right);
    }
    
    bool Symm(TreeNode* p, TreeNode* q) {
        if(!p && !q) {
            return true;
        }else if (!p || !q) {
            return false;                               // writing all the cases which are not possible
        }
        
        if(p->val != q->val) {
            return false;
        }
        return Symm(p->left,q->right) && Symm(p->right, q->left); 
    }
};
