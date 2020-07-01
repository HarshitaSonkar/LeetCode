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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(!root) return {};
        vector<vector<int>>res{{}};
        stack<TreeNode*> s1, s2;
        
        
        s1.push(root);
        bool x = true;
        
        while(!s1.empty()){
            TreeNode* temp = s1.top();
            s1.pop();
            
         //   while(temp){              // temp is not null
                res.back().push_back(temp -> val);
            
               if(x){                    // x is TRUE
                   if(temp -> left) s2.push(temp -> left );
                   if(temp -> right) s2.push(temp -> right );
               }else{
                   if(temp -> right) s2.push(temp -> right );
                   if(temp -> left) s2.push(temp -> left );
               }
         //   }
            if(s1.empty() && !s2.empty()){
                 x = !x;
                swap(s1,s2);
               res.push_back({});
            }
        }
     return res;   
    }
};             
/*class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans{{}};
        stack<TreeNode*> p,q;
        p.push(root);
        int cnt=0;
        while(!p.empty() || !q.empty()){
            
            TreeNode* n=p.top();
            ans.back().push_back(n->val);            
            p.pop();             
            
            if(cnt%2==0){
                if(n->left) q.push(n->left);            
                if(n->right)q.push(n->right); 
            }else{                          
                if(n->right)q.push(n->right);
                if(n->left) q.push(n->left); 
            }
            if(p.empty() &&!q.empty())  {
                cnt++;
                swap(p,q);
                ans.push_back({});
            }
        }
        
        return ans;
    }
};             */
