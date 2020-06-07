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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int k = lists.size();
        
        if(k==0)
            return NULL;
        
        ListNode* ln;
        ListNode* ans;
        
        pair<int, ListNode*> top;
        priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>, greater<pair<int, ListNode*>>>  pq;
        
        int val;
        ListNode* temp;
        bool flag = false;
        
        for(int i=0; i<k; i++){ 
            temp = lists[i];
            if(temp != NULL){
                val = (*temp).val;    
                pq.push(make_pair(val, temp));
                flag = true;   
            }
        }
        
        if(flag == false)
            return NULL;
        
        flag = false;
        
        while(!pq.empty()) {
            top = pq.top();
            pq.pop();
            
            if(flag == false){
                ln = new ListNode(top.first);
                flag = true;
                ans = ln;
            }
            else{
                temp = new ListNode(top.first);
                ln->next = temp;
                if(top.second->next != NULL || pq.size() != 0)
                    ln = temp;
            }
            
            if(top.second->next != NULL){
                pq.push({top.second->next->val, top.second->next});
            }
        }
        return ans;
    }
};
