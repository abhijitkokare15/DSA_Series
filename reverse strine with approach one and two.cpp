#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

****************************************************************
void reverse(LinkedListNode<int> *&head, LinkedListNode<int> *&curr, LinkedListNode<int> *&prev)
{
    if(curr==NULL)
    {
       head=prev;
       return;
    }

 LinkedListNode<int>* forward = curr->next;

reverse(head,forward,curr);
curr->next=prev;
   

}

*/
LinkedListNode<int> *reverse(LinkedListNode<int> *head) 
{
   if(head==NULL || head->next==NULL)
{
    return head;
}
   

LinkedListNode<int> *Small_head=reverse(head->next);
head->next->next=head;
head->next=NULL;
return Small_head;

}


   




LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   // LinkedListNode<int> *curr = head;
    //LinkedListNode<int> *prev = NULL;
   // LinkedListNode<int> *forward = NULL;
/*
if(head==NULL || head->next==NULL)
{
    return head;
}
    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
       
        curr = forward;
    }
    head = prev;
    
    return head;
}*/

//reverse(head,curr,prev);
return  reverse(head);
}



