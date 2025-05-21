/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy; 
    
    while(list1&&list2)
    {
        if((list1->val)<(list2->val))
        {
            tail->next=list1;
            list1=list1->next;
            tail=tail->next;
        }
        else
        {
            tail->next=list2;
            list2=list2->next;
            tail=tail->next;
        }
    }
    if(list1)
    {
        tail->next=list1;
    }
    else if(list2)
    tail->next=list2;
    return dummy.next;
}