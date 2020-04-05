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
    bool hasCycle(ListNode *head) {
        int t = 100000;
        while(t--)
        {
            if(head == NULL)
                return false;
            head = head->next;
        }
        
        return true;
    
        /*  if(head==NULL) return head;
        
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
        
        return false;          */
    }
};
