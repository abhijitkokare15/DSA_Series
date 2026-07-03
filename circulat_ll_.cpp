#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d,Node *next=NULL) {
        this->data = d;
        this->next = next;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};
void traverse(Node* &head,Node* tail)
{
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
        return;
    }
       if(head==tail)
       {
         cout<<head->data<<"->";
         return;
       }

      Node * temp=head;
      Node*current=NULL;

      while(temp!=current)
      {
         current=head;
         cout<<temp->data<<"->";
          temp=temp->next;
      }
       cout<<"end";
     /*cout<<"end"<<endl;
       cout<<"head data"<<head->data<<endl;
       cout<<"Tail->data"<<tail->data<<endl;
       cout<<"Tail->next->data"<<tail->next->data<<endl;*/
}

void insertAtEnd(Node* &head,Node* &tail ,int data)
{  
    if(head==NULL)
    {
     head = new Node(data);
     head->next=head;
     tail=head;
     
      return;
    }
    Node* temp = new Node(data);
    temp->next=head;
    tail->next=temp;
    tail=temp;
}
void insertAtHead(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
    head = new Node(data);
     head->next=head;
     tail=head;
    return;
    }

/*cout<<head<<endl;
cout<<head->next<<endl;
cout<<tail<<endl;
cout<<tail->next<<endl;*/

Node* temp = new Node(data);
temp->next=head;
tail->next=temp;
head=temp;

}

void insertAtValue(Node* &head,Node* &tail,int data,int value)
{
    Node* temp=head;
    Node* current =NULL;
    if(head->data==value)
    {
          insertAtHead(head,tail,data);
          return;
    }

    if(tail->data==value)
    {
          insertAtEnd(head,tail,data);
          return;
    }

    while(temp->data!=value && temp!=current)
    {
        temp=temp->next;
    }

     Node* insert = new Node(data);
     insert->next=temp->next;
    temp->next=insert;
}
void insertAtPosition(Node* &head,Node* &tail,int data ,int pos)
{
    Node* temp=head;
       if(pos==1)
       {
        insertAtHead(head,tail,data);
        return;
       }
       int cnt=1;
       while(cnt<pos-1)
       {
        temp=temp->next;
        cnt++;
       }

       if(temp->next==head)
       {
         insertAtEnd(head,tail,data);
         return ;
       }
    Node* insert = new Node(data);
     insert->next=temp->next;
     temp->next=insert;
   


}


int main()
{
    Node* head = new Node(30);
    head->next=head;
    Node* tail=head;

    insertAtHead(head,tail,20);
    traverse(head,tail);
    cout<<endl;
   insertAtHead(head,tail,10);
    traverse(head,tail);
    cout<<endl;
    insertAtEnd(head,tail,40);
    traverse(head,tail);
     cout<<endl;
    insertAtEnd(head,tail,50);
    traverse(head,tail);
     cout<<endl;
    insertAtPosition(head,tail,100,4);
    traverse(head,tail);
    cout<<endl;
    insertAtValue(head,tail,105,20);
    traverse(head,tail);


    return 0;
}
