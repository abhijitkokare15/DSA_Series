//approach1 

void reverseStack(stack<int> &s) {
 
 vector<int> v;
  
   while(!s.empty())
   {
       v.push_back(s.top());
       s.pop();


   }



   for(int i = 0; i < v.size(); i++)
    {
        s.push(v[i]);
    }

}


//approacch 2 recursion
#include <stack>
using namespace std;

void insertBottom(stack<int> &s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    insertBottom(s, x);

    s.push(num);
}

void reverseStack(stack<int> &s)
{
    if(s.empty())
        return;

    int num = s.top();
    s.pop();

    reverseStack(s);

    insertBottom(s, num);
}