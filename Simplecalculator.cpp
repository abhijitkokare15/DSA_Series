#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter the value a aand b:"<<endl;
  cin>>a>>b;
  char op;
  cout<<"Entet the operation to be performed(symbol):"<<endl;
  cin>>op;
  
  switch(op)
  {
      case '+':
               cout<<a+b;
                break;
   case '-':
               cout<<a-b;
                break;
                
    case '*':
               cout<<a*b;
                break;
   case '/':
               cout<<a/b;
                break;
                
                
    case '%':
               cout<<a%b;
                break;
                
    default:
              cout<<"Invalid choice"<<endl;
              
  }
  return 0;
}
