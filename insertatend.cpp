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
void  traverse (Node* &head)
{
    Node* temp = head;
    while(temp!=0)
    {
        
        cout<<temp->data<<endl;
       // cout<<temp->next<<endl;
        temp=temp->next;
    
     } 
    }  
void insertAtTail(Node * &tail,int data)
{
    Node* temp = new Node(data);
    
    tail->next=temp;
     tail=temp;
    
     

}

void insertAtHead(Node * &head,int data)
{
    Node* temp = new Node(data,head);
    head=temp;
    /*cout<<temp->data<<endl;
    cout<<temp->next<<endl;
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next<<endl;
    cout << (*((*head).next)).data<<endl;
    cout<<(*((*head).next)).next<<endl;
    traverse(head);*/

}
   

 


int main()
{
    Node* head = new Node(10);// cread a new node as head 
    Node* tail=head;
    
   // insertAtHead(head,0);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    

    
    traverse(head);
    return 0;



    
}