#include<stack>
#include<iostream>

using namespace std;

int main()
{

 // creation of stack
 stack<int> s;
 //add element
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);

 cout<<" size of stack-=>"<<s.size()<<endl; // return the size


 //display stack;
 for(int i = 0; i < 4; i++)
    {
        cout << s.top() << endl;// pritnting element at the top of stack

        s.pop(); // removing stack;
    }
    //bool check =s.empty(); 
    bool check =s.empty();
      cout << boolalpha<<endl;
 
   cout<<"Stack is empty true or false =>"<<check;
 return 0;




}