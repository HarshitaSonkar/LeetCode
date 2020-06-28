/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
     
        if(!head)
            return NULL;
        if(!head -> next)
            return new TreeNode(head -> val);
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        
        while(fast -> next != NULL){
            
            prev = slow;
            slow = slow -> next;
            fast = fast -> next;
            
            if(fast -> next != NULL)
                fast = fast -> next;
        }
        prev -> next = NULL;
        
        auto newNode = new TreeNode(slow -> val);
        
        newNode -> left = sortedListToBST(head);
        newNode -> right = sortedListToBST(slow -> next);
        
        return newNode;           //Time complexity: O(N)    Space complexity: O(1)

    }
};

/*      List<Integer> nums = new ArrayList<Integer>();
        while(head !=null){
            nums.add(head.val);
            head = head.next;
        }
        
        return driver(nums,0,nums.size()-1);
    }
    
    public TreeNode driver(List<Integer> nums, int left, int right){
       if(left>right){
           return null;
       }else {
           int mid = (left+right)/2;
           TreeNode node = new TreeNode(nums.get(mid));
           node.left = driver(nums,left,mid-1);
           node.right = driver(nums,mid+1,right);
           return node; 
       }
    }
Runtime O(n + logn)
Space: O(n) for list

*/
