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
        
        if(root == nullptr) return root;
        int count = 0;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int count = q.size();
            while(count--)
            {
                Node* curr = q.front();
                q.pop();
                
                if(curr->left) 
                    q.push(curr->left);
                if(curr->right) 
                    q.push(curr->right);
                if(count == 0) 
                    curr->next = nullptr;
                else
                    curr->next = q.front();
            }
        }
        return root;
    }
};
