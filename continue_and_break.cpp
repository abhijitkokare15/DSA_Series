
#include <iostream>
using namespace std;
int main()
{
  int n=10;
  
   cout<<"break:"<<endl;
  for(int i=1;i<=n;i++)
  {   
      if(i==5)
      {
          cout<<endl;
          break;
      }
      cout<<i<<endl;
  }
      cout<<"continue:"<<endl;
 for(int i=1;i<=n;i++)
  {   
      if(i==5)
      {
          cout<<endl;
          continue;
      }
      cout<<i<<endl;
  }
     
 
    }    

