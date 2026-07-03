#include<iostream>
using namespace std;

class Node
{
    
    public:
    int data;
     Node * next;
       Node * prev;

      Node(int data,Node* next=NULL,Node* prev=NULL)
      
   {
        this->data=data;
        (*this).next=next;
        this->prev=prev;

   }
};



 
void traverse(Node*&head)
{
    Node*temp=head;
    while(temp!=0)
    { 
        //cout<<"Addree of node-> "<<temp<<endl;
      cout<<"| "<<temp->prev<<" |"<<temp->data<<" |"<<temp->next<<" |"<<"  ->";
       // cout<<"prev->"<<temp->prev<<endl;
        
        //cout<<"next->"<<temp->next<<endl;
        //cout<<endl;
        temp=temp->next;

    }

   cout<<"end";
}
    void insertAtTail(int data,Node* &tail,Node *&head)
{
     Node *temp= new Node(data);
    if(tail==NULL)
    {
      tail=temp;
      head=temp;
        return;
    }
   
    temp->next=NULL;
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}


void insertAtHead(int data,Node* &head,Node* &tail)

{ 
     Node* temp = new Node(data);
    if(head==NULL)
    {
        head=temp;
        tail=head;
        return;
    }
   
  temp->next=head;
    head->prev=temp;
    head=temp;


}
void insertAtPosition(int data,Node* &head,Node * &tail,int pos)
{
   // if enterd position is 1 i.e head 

    if(pos==1)
    {
        insertAtHead(data,head,tail);
        return ;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;

    }

    // inset at tail i.e last position 

    if(temp->next==NULL)
    {
        insertAtTail(data,tail,head);
        return;
    }
     Node* insert = new Node(data);
     insert->next=temp->next;
     insert->prev=temp;
     //temp->next->prev=insert;
     insert->next->prev=insert;
     temp->next=insert;

    
}




void insertAtValue(int data,Node* &head,Node * &tail,int value)
{
   // if enterd position is 1 i.e head 

    if(head->data==value)
    {
        insertAtHead(data,head,tail);
        return ;
    }

    if(tail->data==value)
    {
        insertAtTail(data,tail,head);
        return;
    }
    Node* temp = head;
    while(temp->data!=value)
    {
        temp=temp->next;

    }

    // inset at tail i.e last position 
        
    
     Node* insert = new Node(data);
     insert->next=temp->next;
     insert->prev=temp;
     temp->next->prev=insert;
     temp->next=insert;

    
}






int main()
{
Node* head = new Node(20);
Node* tail=head;
insertAtHead(10,head,tail);
insertAtTail(30,tail,head);
insertAtPosition(55,head,tail,3);
insertAtValue(65,head,tail,30);
insertAtTail(1000,tail,head);
traverse(head);

    return 0;
}

