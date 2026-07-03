
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n==0 ||n==1 )
  {
      cout<<"This is not a prime number"<<endl;
  }
  bool prime=true;
  for(int i=2;i<n;i++)
  {   
      if(n%i==0)
      {
        
          prime=false;
          break;
          
      }

  }
     if(prime)
     {
           cout<<"number is not prime";
         
     }
     else
     {
           cout<<"number is a  prime";
     }
  
 
    }    

