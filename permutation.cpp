#include<iostream>
using namespace std;

int fact(int n)
{
    int ans=1;

    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }

    return ans;
}

int main()
{
    int n,r;

    cout<<"Enter the value of number:"<<endl;
    cin>>n;
 cout<<"Enter the value of r i.e sumgroup:"<<endl;
 cin>>r;
   int c = (fact(n))/((fact(r))*((fact(n-r))));
   cout<<c;

}