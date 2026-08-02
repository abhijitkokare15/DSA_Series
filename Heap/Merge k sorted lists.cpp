#include<bits/stdc++.h>


/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

class compare
{
public:
    bool operator()(Node* a, Node* b)
    {
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*> &listArray)
{
    priority_queue<Node*, vector<Node*>, compare> minheap;

    int k = listArray.size();

    // Push first node of every linked list
    for(int i = 0; i < k; i++)
    {
        if(listArray[i] != NULL)
        {
            minheap.push(listArray[i]);
        }
    }

    Node* head = NULL;
    Node* tail = NULL;

    while(minheap.size() > 0)
    {
        Node* first = minheap.top();
        minheap.pop();

        if(first->next != NULL)
        {
            minheap.push(first->next);
        }

        if(head == NULL)
        {
            head = first;
            tail = first;
        }
        else
        {
            tail->next = first;
            tail = first;
        }
    }

    return head;
}