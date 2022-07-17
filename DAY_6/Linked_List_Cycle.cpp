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
        unordered_set<ListNode *> mpp;
        ListNode * temp = head;
        while(temp!=NULL)
        {
            if(mpp.find(temp)==mpp.end())
                mpp.insert(temp);
            
            else
                return true;
            
            temp = temp->next;
        }
        return false;
    }
};