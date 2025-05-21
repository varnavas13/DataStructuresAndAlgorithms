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
    public ListNode middleNode(ListNode head) {
        ListNode temp=head;
    int sz=0;
    ListNode fina=head;
        while(temp!=null)
        {
            sz++;
            head=head.next;
            temp=temp.next;
            if(temp==null)
            break;
            temp=temp.next;
            sz++;
        }
        for(int i=1;i<(sz+1)/2;i++)
        fina=fina.next;
        if(sz%2==0)
        fina=fina.next;
        return fina;
    }
}