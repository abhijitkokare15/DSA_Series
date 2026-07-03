#include <bits/stdc++.h> 
class TwoStack {
int *arr=NULL;
int size;
int top1;
int top2;
int ans;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
     size=s;
     top1=-1;
     top2=size;
     arr= new int[size];
    }

    
    // Push in stack 1.
    void push1(int num) {
        if(top2-top1>1)
        {
            arr[++top1]=num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
         if(top2-top1>1)
        {
            arr[--top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1>=0)
        {
            ans=arr[top1--];
            return ans;
        }

        return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
     if(top2<size)
     {
         ans=arr[top2++];
         return ans;
     }
         return -1;
    }
};
