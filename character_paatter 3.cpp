#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int j;
    int i =1;
    char ch =65;
    
     while(i<=n)
      {
          j=1;
          
          while(j<=n)
          { ch = 'A'+i+j-2;
              cout<<ch;
              //ch++;
              j++;
              
          }
          cout<<endl;
          //ch=ch+1;
          i++;
      }
      
      }
