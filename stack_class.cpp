#include<iostream>
using namespace std;

class Stack
{
    public:
    int *arr=NULL;
    int top;
    int size;
      Stack(int size)
    {
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    void push(int ele)
    {
        if(size-top>1)  // or we can simply call isFull method
       {
        //++top
        arr[++top]=ele;

       } 
       
       else{
          cout<<"Stack is overflow"<<endl;
       }
    }
     void pop()
    {
        if(top>=0)  // true, we can also call isEmpty method
      {
        top--; 
           
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
    int peek()
    {
      if(!isEmpty())
      {
        return arr[top];
      }
       cout<<"Stack is empty"<<endl;
       return -1;
    }
   

    bool isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {

        if(top==size-1)
        { 
            return true;
            
        }
        
        return false;

        // return ( top == size - 1);
    }

};

int main()
{
    Stack s(5);
 s.push(10); 
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 s.push(60);
 cout<<"peak element "<<s.peek()<<endl;
 cout<<boolalpha<<endl;
 cout<<"Stack is full(true) or not(false) =>"<<s.isFull()<<endl;

 cout<<"Stack elemrnts are"<<endl;

 for(int i =s.top;i>-1;i--)
 {
    cout<<s.arr[s.top]<<endl;
    s.pop();
 }
 
 cout<<"Stack is Empty(true) or not(flase)=>"<<s.isEmpty();
    return 0;
}
