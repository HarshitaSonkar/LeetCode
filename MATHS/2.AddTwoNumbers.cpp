/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result;
        result = new ListNode(0);
        ListNode* root = result;
        int carry(0);
        while (result!=NULL){
            if (l1!=NULL){
                result -> val += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2!=NULL){
                result -> val += l2 -> val;
                l2 = l2 -> next;
            }
            carry = result -> val / 10;
            result -> val = result -> val % 10;
            
            if (l1!=NULL || l2!=NULL || carry){
                result -> next = new ListNode(carry);
            }
            result = result -> next;
        }
        return root;
     }
};
