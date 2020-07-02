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
    vector<int> findMode(TreeNode* root) {
        
        if(!root) return {};
        
        int count = INT_MIN;
        map<int, int> mp;
        vector<int> res;
        fillMap(root, mp);
        
        for(auto &i : mp){
            if(i.second == count)
                res.push_back(i.first);
            else if(i.second > count){
                count = i.second;
                res.clear();
                res.push_back(i.first);
            }
        }
        return res;
    }
    void fillMap(TreeNode * root, map<int,int> &mp){
            
        if(!root) return;
            mp[root -> val]++;
            fillMap(root -> left, mp);
            fillMap(root -> right, mp);
    }
};
