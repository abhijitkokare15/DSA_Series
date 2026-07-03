#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
   Node * next;
  
   Node(int data,Node* next=NULL)
   {
        this->data=data;
        (*this).next=next;
   }
};

void insertAtHead(Node * &head,int data)
{
    Node* temp = new Node(data,head);
    head=temp;
    cout<<temp->data<<endl;
    cout<<temp->next<<endl;
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next<<endl;
    cout << (*((*head).next)).data<<endl;
    cout<<(*((*head).next)).next<<endl;

   
}

int main()
{
    Node* head = new Node(10);
    insertAtHead(head,20);
    return 0;

    
}