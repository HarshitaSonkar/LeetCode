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
    ListNode* merge(ListNode* l, ListNode* r){
       
        if(l == NULL) return r;
        if(r == NULL) return l;
        ListNode* res = NULL;
        
        if(l -> val < r -> val){
            res = l;
            res -> next = merge(l -> next, r);
        }else{
            res = r;
            res -> next = merge(l, r -> next);
        }
        return res;
    }
    
    
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        
        while(fast && fast -> next != NULL){
            temp = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        temp -> next = NULL;
        
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);
        
        return merge(left, right);
        
    }
};
