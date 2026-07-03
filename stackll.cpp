#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class stack
{
public:
    Node* top = NULL;

    void push(int data)
    {
        Node* temp = new Node(data);

        if(top == NULL)
        {
            top = temp;
            return;
        }

        temp->next = top;
        top = temp;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is underflow"<<endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int peek()
    {
        if(top == NULL)
        {
            cout<<"Stack is underflow"<<endl;
            return -1;
        }

        return top->data;
    }

    void show()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
  int temp=top->data;
       while(top!=NULL)
 {
     if(top->data==temp)
       cout<<"|"<<top->data<<"|"<<"<-top"<<endl;
    
      else
    
        cout<<"|"<<top->data<<"|"<<endl;
   pop();
}
    }
};

int main()
{
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Element at peek -> "<< s.peek()<<endl;

    s.show();

    cout<<"Element at peek -> "<< s.peek()<<endl;

    return 0;
}