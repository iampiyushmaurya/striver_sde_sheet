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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1 = headA, * temp2 = headB;
        int cnt1 = 0,cnt2 = 0; 
        while(temp1!=NULL || temp2 != NULL)
        {   
            if(temp1!=NULL)
            {
                cnt1++;
                temp1 = temp1->next;
            }
            if(temp2!=NULL)
            {
                cnt2++;
                temp2 = temp2->next;
            }
        }
        temp1 = headA;
        temp2 = headB;
        int n = abs(cnt1-cnt2);
        if(cnt1>cnt2)
        {
            while(n)
            {
                temp1 = temp1->next;
                n--;
            }
        }
        else
        {
            while(n)
            {
                temp2 = temp2->next;
                n--;
            }
        }
        while(temp1!=temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};