#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    arr[0]=5;
    arr[1]=10;
    
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2];
    cout<<endl;
    cout<<sizeof(arr);
    cout<<endl;
    cout<<&arr;
    cout<<*arr;
  //  arr=4;
    cout<<arr[0];
    cout<<endl;
    cout<<&arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<0[arr]<<endl;
  *arr=15;
  cout<<arr[0]<<endl;
  cout<<*arr<<endl;
   *(arr+1)=20;
   cout<<arr[1]<<endl;
   cout<<*(arr+1)<<endl;

   cout<<sizeof(arr)<<endl;

   int *ptr=&arr[0];
   cout<<sizeof(ptr)<<endl;
cout<<"size of arr[o]is:"<<sizeof(arr[0])<<endl;
cout<<&ptr<<endl;
cout<<sizeof(&arr)<<endl;
cout<<sizeof(*arr)<<endl;
cout<<"size of arr[o]is:"<<sizeof(&arr[0])<<endl;

cout<<ptr<<endl;
cout<<&ptr<<endl;
}


