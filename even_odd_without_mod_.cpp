#include<iostream>
using namespace std;

int main()
{
    cout<<"Entet the number:";
    int n;
   cin>>n;

   if(n&1)
   {
    cout<<"number is odd";

   }

else
{
    cout<<"No is even";
}

    n=5;
    cout<<(n&1);
}