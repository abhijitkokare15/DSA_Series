#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{
    // base case

    if(size==1 || size==0)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool isremaning=issorted(arr+1,size-1);
        return isremaning;

    }
}
int main()
{
    int arr[5]={10,20,45,101,100};
   if( issorted(arr,5))
   {
    cout<<"Sorted"<<endl;
   }

   else{
    cout<<"not"<<endl;
   }
}