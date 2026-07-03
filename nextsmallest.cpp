#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
   
    stack<int> s;
    s.push(-1);
    vector<int>ans;
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        while(s.top()>=curr)
        {
          s.pop();
        }

        // outof loop means ele is smalle stored in ans
         ans[i]=s.top();
         s.push(curr);

    }
    return ans;
}