#include <bits/stdc++.h>
Node *removeDuplicates(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* temp = head;
    unordered_map<int,bool> visited;

    visited[temp->data] = true;

    while(temp != NULL && temp->next != NULL)
    {
        if(visited[temp->next->data] == true)
        {
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        }
        else
        {
            visited[temp->next->data] = true;
            temp = temp->next;
        }
    }

    return head;
}