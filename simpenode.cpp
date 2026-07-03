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

int main()
{
    Node* n = new Node(10);
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    cout<<(*n).data<<endl;
    cout<<(*n).next<<endl;
}