#include<iostream>
using namespace std;
int print(int n,int n1,int n2 ,int i)
{
  if(i>n)
  {
    return  0;
  }

  int fib =n1+n2;
  n1=n2;
  n2=fib;
  i++;
  return print(n,n1,n2,i);
  

}

int main()
{
    int n;
    cin>>n;
    
    int n1,n2;
    n1=0;
    n2=1;
    int i=1;
  int ans=   print(n,n1,n2,i);

  cout<<ans;
}