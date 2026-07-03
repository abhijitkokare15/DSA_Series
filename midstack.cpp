#include <bits/stdc++.h>
using namespace std;
//using recursion
void solve(stack<int>& s, int count, int N)
{
    if(count == N/2)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, count + 1, N);

    s.push(num);
}

void deleteMiddle(stack<int>& s, int N)
{
    if(s.empty())
        return;

    int count = 0;
    solve(s, count, N);
}

// approach2
#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int>& s, int N)
{
    if(s.empty())
        return;

    int count = 0;
    vector<int> v;

    while(!s.empty())
    {
        if(count == (N/2))
        {
            s.pop();
            break;
        }

        v.push_back(s.top());
        s.pop();
        count++;
    }

    for(int i = v.size()-1; i >=0; i--)
    {
        s.push(v[i]);
    }
}

//approach 2
#include <bits/stdc++.h> 

stack<int> pushAtBottom(stack<int>& ms, int x) 
{

    vector<int> v;

    while(!ms.empty())
    {
        

        v.push_back(ms.top());
        ms.pop();
        if(ms.empty())
        {
            ms.push(x);
            break; 
        }
    }

    for(int i = v.size()-1; i >=0; i--)
    {
        ms.push(v[i]);
    }

    return ms;

}

