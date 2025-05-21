/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp1=head;
    struct ListNode* temp2=head;
    int cnt=0;
    while(temp1)
    {
        temp1=temp1->next;
        cnt++;
    }
    if(cnt==n)
    {
        head=head->next;
        return head;
    }
    for(int i=1;i<cnt-n;i++)
    temp2=temp2->next;
    temp2->next=temp2->next->next;
    return head;
}