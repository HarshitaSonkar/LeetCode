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
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next) return true;
        ListNode *slow = head, *fast = head, *prev = NULL;
        head = slow->next;
        while(fast && fast->next ) {
            fast = fast->next->next;
       
            head = slow->next;
            slow->next = prev;
            prev = slow;
            slow = head;
        }
        if(fast)
            slow = slow->next;
        while(slow && prev) {
            if(slow->val != prev->val) {
                return false;
            }
            slow = slow->next;
            prev = prev->next;
        }
        return true;
        
        
    }
};
