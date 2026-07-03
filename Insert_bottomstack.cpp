#include <bits/stdc++.h> 
void solve(stack<int>& ms,int x)
{
    if(ms.empty())
    {
        ms.push(x);
        return;
    }

    int num = ms.top();
    ms.pop();
    solve(ms,x);
    ms.push(num);
}
stack<int> pushAtBottom(stack<int>& ms, int x) 
{
    solve(ms,x);

    return ms;

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



