#include<iostream>
using namespace std; 

int show(int *a ) // refernce parameter
{ 
    a++;
    cout<<"Calue of a inside show fumction:"<<a;
    return 0;
}
int dummy(int n)
{
    n++;
    return n;
}
int main()
{
    
  
  int ans =dummy(10);//pass bybvalue;
  int a=10;
   int ref=show(a);
   cout<<ref<<endl;
  cout<<ans;
  
  cout<<"the value of a inside main:"<<a;
  return 0;
  
  

}