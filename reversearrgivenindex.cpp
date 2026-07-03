#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,9,8,7,6};
    cout<<"Array before reversing:"<<endl;
    int i;

    for( i=0;i<5;i++)
    {
        cout<<i<<"th index element ->:"<<" "<<arr[i]<<endl;
    }   
    int index;
         int start=0;
         int end=5-1;
    cout<<"Enter the index from which u want to reverse:"<<endl;
    cin>>index;
    start=index+1;
   
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
    cout<<endl<<endl;
    for( i=0;i<5;i++)
    {
        cout<<i<<"th index element ->:"<<" "<<arr[i]<<endl;
    }
     return 0;
}