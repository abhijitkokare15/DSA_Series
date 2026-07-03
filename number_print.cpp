#include<iostream>
using namespace std;
  int main()
  {
      int n;
      cin>>n;
       int count=1;
       int i =1;
       int j;
       
       while(i<=n)
       {
           j=1;
           while(j<=n)
           {
               cout<<count<<"\t";
               count ++;
               j++;
               
           }
           cout<<endl;
           i++;
       }
       return 0;
  }