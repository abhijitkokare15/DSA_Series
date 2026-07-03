#include<iostream>
using namespace std;
void update(int **p2)
{
    p2=p2+1;
    *p2=*p2+1;
    **p2=**p2+1;
}

int main()
{
    int a=5;
    int *p=&a;
    int **p1=&p;


// printing address 
cout<<"&a"<<" ="<<*&a<<endl;
cout<<"p:"<<" ="<<p<<endl;
cout<<"&p:"<<" ="<<&p<<endl;
cout<<"p1"<<" ="<<p1<<endl;
cout<<"&p1"<<" ="<<&p1<<endl;
cout<<"*p"<<" ="<<*p<<endl;
cout<<"*p1"<<" ="<<*p1<<endl;
cout<<"**p1"<<" ="<<**p1<<endl;
   

    return 0;
}