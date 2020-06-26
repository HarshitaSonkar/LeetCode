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
    int maxDepth(TreeNode* root) {
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) +1;       
    }
};

/*
  if(root == nullptr)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        
        while(!q.empty())
        {
            int count = q.size();
            while(count--)
            {
                TreeNode* n = q.front();
                q.pop();
                
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            
            depth++;
        }
        
        return depth;
*/
