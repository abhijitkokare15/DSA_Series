Node *findMiddle(Node *head) 
{
    if(head == NULL)
    {
        return NULL;
    }

    if(head->next == NULL)
    {
        return head;
    }

    Node *fast = head->next;
    Node *slow = head;

    while(fast != NULL)
    {
        fast = fast->next;

        if(fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow;
}