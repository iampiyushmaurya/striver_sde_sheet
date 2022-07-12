/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy = new ListNode();
        dummy.next = head;
        ListNode temp = head, slow = dummy;
        int cnt = 1;
        while(temp.next!=null)
        {
            temp = temp.next;
            cnt++;
                
        }
        int x = cnt - n;
        while(x!=0)
        {
            slow = slow.next;
            x--;
        }
        slow.next = slow.next.next;
        return dummy.next;
        
    }
}