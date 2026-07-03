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

    int n = 0;
    Node *temp = head;


    while(temp != NULL)
    {
        n++;
        temp = temp->next;
    }

    
    int mid = (n / 2)+1;

    temp = head;
    int cnt = 1;

    while(cnt < mid)
    {n
        temp = temp->next;
        cnt++;
    }

    return temp;
}