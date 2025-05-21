/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head)
    return head;
   struct ListNode* l1=head;
   struct ListNode* l2head=head->next;
   struct ListNode* l2=head->next;
   while(l1->next&&l1->next->next)
   {
    l1->next=l2->next;
    l1=l1->next;
    l2->next=l1->next;
    l2=l1->next;

   }
   l1->next=l2head;
   return head;
}