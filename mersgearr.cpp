#include<iostream>
using namespace std;
int main()
{
int arr1[5]={1,9,8,7,6};
int arr2[3]={10,2,3};
int arr3[8];
int in=0;
for( int i=0;i<5;i++)
{
    arr3[in]=arr1[i];
      in++;
}
for( int i=0;i<5;i++)
{
    arr3[in]=arr2[i];
      in++;
}

for( int i=0;i<8;i++)
{
    cout<<arr3[i]<<endl;
}
return 0;
}


