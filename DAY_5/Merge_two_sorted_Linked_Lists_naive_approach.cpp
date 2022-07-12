/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
                {
                    min = list2->val;
                    list2  = list2->next;  
                }
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1 == NULL && list2 == NULL) return list1;
        ListNode * dummy = new ListNode(0);
        ListNode * dd = dummy;
        while(list1!=NULL || list2!=NULL)
        {
            if(list1!=NULL && list2!=NULL)
            {
                int min;
                if(list1->val<list2->val)
                {
                    min = list1->val;
                    list1  = list1->next;
                }
                else
                {
                    min = list2->val;
                    list2  = list2->next;
                }
                ListNode * temp = new ListNode(min);
                dd->next = temp;
                dd = dd->next;
            }
            
            else if(list1!=NULL && list2 == NULL)
            {
                while(list1!=NULL)
                {
                    ListNode * temp = new ListNode(list1->val);
                    dd->next = temp;
                    dd = dd->next;
                    list1 = list1->next;
                    
                }
            }
            
            else if(list2!=NULL && list1 == NULL)
            {
                while(list2!=NULL)
                {
                    ListNode * temp = new ListNode(list2->val);
                    dd->next = temp;
                    dd = dd->next;
                    list2 = list2->next;
                }
            }
        }
        return dummy->next;
    }
};