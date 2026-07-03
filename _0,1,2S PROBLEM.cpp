// Approach 1
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



    // Write your code here.
int zero=0,one=0,two=0;
Node* temp=head;
while(temp!=0)
{
    if(temp->data==0)
    {
        zero++;

    }
    else if(temp->data==1)
    {
        one++;
    }

    else{
        two++;
    }

    temp=temp->next;

}
temp=head;

 while(temp!=0)
{
    if(zero!=0)
    {
        temp->data=0;
        zero--;

    }
    else if(one!=0)
    {
        temp->data=1;
        one--;
    }

    else{
       temp->data=2;
       two--;
    }
      
    temp=temp->next;

}

 return head;

}*/


// Approach 2
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
 void insertAtTail(Node *&tail,Node *curr)
 {
     tail->next=curr;
     tail=curr;
 }
Node* sortList(Node *head){


Node* zhead=new Node(-1);
Node* ohead=new Node(-1);
Node* thead=new Node(-1);
 Node* ztail=zhead;
 Node* otail=ohead;
 Node* ttail=thead;
Node* curr=head;
int value;

while(curr!=NULL)
{
    value=curr->data;
    if(value==0)
    {
        insertAtTail(ztail,curr);

    }
    else if(value==1)
    {
        insertAtTail(otail,curr);

    }

    else{
        insertAtTail(ttail,curr);
    }

      curr=curr->next;

}

  if(ohead->next!=NULL)
  {
      ztail->next=ohead->next;
  }

  else{
      ztail->next=thead->next;
  }

  otail->next=thead->next;
  ttail->next=NULL;

  head=zhead->next;
   delete zhead;
   delete ohead;
   delete thead;
   


 return head;

}