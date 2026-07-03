
#include <iostream>
using namespace std;
int main()
{
 
  int i=1;
  int n=5;
  cout<<"using synatx:"<<endl;
  for(i=0;i<=n;i++)
  {
      cout<<"Om Namo Venkateshya."<<endl;
          
  }
   
   cout<<"without for loop synatx"<<endl;
  for(; ;)
  {
      if(i<=n)
      {
          cout<<"Om Namo Venkateshya."<<endl;
      }
      else
      {
          break;
      }
      i++;
  }
      
      
      cout<<"more initalization ,condition checking and incrmrnt and decrement "<<endl;
      int j;
     int k;
    for(i=0,j=10,k=-10;i<=10 && j>=0 && k<0;i++,j--,k++)
    {
        cout<<"i:"<<i<<endl<<"j:"<<j<<endl<<"k:"<<k<<endl;
    }    
}
