#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,0,50,60,9,15};
    cout<<"Array before reversing:"<<endl;
    int i;
    for( i=0;i<6;i++)
    {
        cout<<i<<"th index element ->:"<<" "<<arr[i]<<endl;
    }
    i =0;
    int start=0;
    int end=6-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
    cout<<endl<<endl;
    for( i=0;i<6;i++)
    {
        cout<<i<<"th index element ->:"<<" "<<arr[i]<<endl;
    }
     return 0;
}