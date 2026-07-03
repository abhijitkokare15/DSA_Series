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
          //ch=65;
          while(j<=n)
          {
            //char ch ='A'+j-1;
     
              cout<<ch;
              ch++;
              j++;
              
          }
          cout<<endl;
          //ch=ch+1;
          i++;
      }
      
      }
