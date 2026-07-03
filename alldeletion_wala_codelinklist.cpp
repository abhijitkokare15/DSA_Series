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

  ~Node()
{


    cout << " memory is free for node with data "<<endl;
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
    void deleten(Node* &head,int value,Node *&tail)
    {
        Node *temp=head; 
        if(temp->data==value)
   {
    head=temp->next;
    temp->next=NULL;
    delete temp;
    return;
   }

       /* if( pos==1)
        {
           
            head=temp->next;
            delete temp;
            return ;
}
int cnt=1;
Node* prev=NULL;
while(cnt!=pos)
{
    prev=temp;
    temp=temp->next;
    cnt++;
}

   if(temp->next==NULL)
   {
      prev->next=NULL;
      tail=prev;
      delete temp;
      return;
   }

  prev->next=temp->next;
  delete temp; */
  Node*prev=NULL;
   while(temp->data!=value)
   {
    prev=temp;
    temp=temp->next;
   }
// deleting  if value is at head
   
   if(temp->next==NULL)
   {
    prev->next=NULL;
    tail=prev;
    temp->next=NULL;
    
    delete temp;
     cout<<"data"<<tail->data<<endl;
    

   
    return;
   }
    
   prev->next=temp->next;
    temp->next=NULL;
   delete temp;



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
   

 void insertAtTail(Node * &tail,int data)
{
    Node* temp = new Node(data);
    
    tail->next=temp;
     tail=temp;
    
     

}




    void insertAtmiddle(Node* &head ,Node* &tail,int pos,int data)
{
    // if enterd position is 1 i.e head 

    if(pos==1)
    {
        insertAtHead( head,data);
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

    if(temp->next!=NULL)
    {
        insertAtTail(tail,data);
        return;
    }
     Node* insert = new Node(data);
      insert->next=temp->next;
      temp->next=insert;
    
}



int main()
{
    Node* head = new Node(10);// cread a new node as head 
    Node* tail=head;
    
   // insertAtHead(head,0);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
     insertAtmiddle(head,tail,4,55);
     deleten(head,55,tail);
    

    
    traverse(head);
    return 0;



    
}