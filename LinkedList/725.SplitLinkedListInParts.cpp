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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        
        vector<ListNode*> res(k,nullptr);
        ListNode* ptr = root;
        int sizeOfList = 0;
        vector<int> sizes(k,0);
        
        while(ptr)
        {
            sizeOfList++;
            ptr = ptr->next;
        }
        
        int equalSize = sizeOfList/k;
        for(int i=0; i<k; i++)
            sizes[i] = equalSize;
        
        sizeOfList = sizeOfList%k;
        for(int i=0; (i<k && sizeOfList); i++)
        {
            sizes[i]++;
            sizeOfList--;
        }
        
        ptr = root;
        int groupNo = 0;
        
        while(groupNo < k && ptr)
        {
            ListNode* start = ptr;
            for(int i=0; (i<sizes[groupNo]-1); i++)
                ptr = ptr->next;
            
            ListNode* end = ptr;
            if(ptr) ptr = ptr->next;
            end->next = nullptr;
            res[groupNo] = start;
            groupNo++;
        }
        return res;
    }
};
