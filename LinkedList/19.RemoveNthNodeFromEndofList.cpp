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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
         
        if (!head) 
            return NULL;
        
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        
        int t = n;
        
        while(temp1 && t--){
            temp1 = temp1->next;
        }
        
        if(!temp1 && t == 0)
            return head->next;
        
        while(temp1 && temp2 && temp1->next){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        if(temp2 && temp2->next){
            temp2 -> next = temp2 -> next -> next;
        }
        
        return head;
    }
};
