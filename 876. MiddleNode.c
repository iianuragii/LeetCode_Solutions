struct ListNode* middleNode(struct ListNode* root)
{
    struct ListNode *s,*t;
    s = root;
    int c = 0,p = 0;
    while(s != NULL)
    {
        c++;
        s = s->next;
    }
    s = root;
    while(p != c/2)
    {
        s = s->next;
        p++;
    }
    return s;
}
