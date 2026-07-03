#include<iostream>
//#include<stack>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ="Sachin Wayal";
      cout<<s<<endl;

    /*stack<char> stack;

    for(int i=0;i<s.length();i++)
    {
        stack.push(s[i]);
    }

    string ans="";

    while(!stack.empty())
    { 
        ans.push_back(stack.top());
        stack.pop();

    }*/

    char stack[s.length()];
int top=-1;
for(int i=0;i<s.length();i++)
{
     stack[++top]=s[i];

}
string ans="";

for(int i=top;i>-1;i--)
{
 ans.push_back(stack[top--]);

}
    cout<<ans<<endl;
   return 0;
}