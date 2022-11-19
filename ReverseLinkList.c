struct ListNode* reverseList(struct ListNode* head) 
{
   struct ListNode * s= head;
   struct ListNode * temp= NULL;
    if (head==NULL||head->next==NULL)
        return head;
    
    while (s->next != NULL && s != NULL)
    {
        temp = s->next;
        s->next = temp->next;
        temp->next = head;
        head = temp;
        temp = s->next;
    }
    return head;
}
