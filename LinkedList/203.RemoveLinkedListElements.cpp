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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return head;
            ListNode *temp= new ListNode(0);
            temp->next = head;
            ListNode* current=temp;
            while(current->next!=NULL){
                if(current->next->val==val){
                   
                    if(current->next->next!=NULL)
                        current->next=current->next->next;
                    else
                        current->next=NULL;
                
                }else{
                    current=current->next;
                }
            }
        
        return temp->next;  
        
       
        
    }
};
