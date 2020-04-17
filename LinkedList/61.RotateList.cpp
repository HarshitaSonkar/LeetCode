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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp_end = head;
        int length = 0;
        
        if(k==0 || head==NULL){
            return head;
        }
        while(temp_end->next != NULL){
              temp_end = temp_end->next;
              length++;
        }
              length++;
              k = k%length;
        for(int i = 0; i<(length - k); i++){
              temp_end->next = head;
              head = head->next;
              temp_end = temp_end->next;
              temp_end->next = NULL;
         }
        return head;
    }
};
