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
    vector<int> nextLargerNodes(ListNode* head) {
        
        if(head==NULL) return {};
        
        vector<int>vect;
       ListNode* temp1=head;
        ListNode* temp2=temp1->next;

     while(temp1->next!=NULL){
           int max=0;
         temp2=temp1->next;
            while(temp2!=NULL){
               if(temp2->val > temp1->val){
                   max=temp2->val;
                      break;
                } else
            
                 temp2=temp2->next;
             }
         vect.push_back(max);
         temp1=temp1->next;
       }
        vect.push_back(0);
        return vect;
    }
        
};
