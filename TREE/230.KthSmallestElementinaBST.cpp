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
    void SmallElem(TreeNode* root, int& k,int& res){
        if(!root)
            return;
        SmallElem(root->left,k,res);
        if(k==0)
            return;
        res = root->val;
        k--;
        SmallElem(root->right,k,res);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int res;
        SmallElem(root,k,res);
        return res;
    }
};
