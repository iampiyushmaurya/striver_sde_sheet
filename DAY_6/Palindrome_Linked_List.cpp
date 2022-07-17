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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode *slow=head, *fast=head, *temp2=head;
        while(fast->next != NULL && fast->next->next != NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode * temp = slow->next;
        ListNode * dummy = NULL, *next;
        while(temp!=NULL)
        {
            next = temp->next;
            temp->next = dummy;
            dummy = temp;
            temp = next;
        }
        slow->next = dummy;
        slow = slow->next;
        while(slow!=NULL)
        {
            if(slow->val!=temp2->val)
                return false;
            slow = slow->next;
            temp2 = temp2->next;
        }
        return true;
        
    }
};