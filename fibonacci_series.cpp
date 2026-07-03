
#include <iostream>
using namespace std;
int main()
{
  
  int fib1=0;
  int fib2=1;
  int fib3=fib1+fib2;
  
  cout<<fib1<<" "<<fib2<<" ";
  
  for(int i=1;i<=10;i++)
  {   
      cout<<fib3<<" ";
      fib1=fib2;
      fib2=fib3;
      fib3=fib1+fib2;
      
  }
 
    }    

