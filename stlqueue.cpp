 #include<bits/stdc++.h>
 #include<iostream>

using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    cout<<"front:"<<q.front()<<endl;
    cout<<"rear:"<<q.back()<<endl;

    q.push(12);
     cout<<"front:"<<q.front()<<endl;
     cout<<"rear:"<<q.back()<<endl;

    q.push(101);
     cout<<"front:"<<q.front()<<endl;
     cout<<"rear:"<<q.back()<<endl;
      
    q.pop();
     cout<<"front:"<<q.front()<<endl;
     cout<<"rear:"<<q.back()<<endl;

    cout<<"Size of queue is :"<<q.size()<<endl;

    if(q.empty())
     cout<<"empty"<<endl;
    
     else
       cout<<"not empty"<<endl;


}
