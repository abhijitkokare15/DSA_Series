#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)

{ 
    bool swapped=false;
    for(int i=1;i<n;i++) 
    {
       for(int j=0;j<n-i;j++)
       {
        if(arr[j+1]<arr[j])
        {
            swap(arr[j],arr[j+1]);
               swapped=true;
 }
       }
        if(swapped==false) // checking array is already sorted or not
        {
            break;
        }
       
    }
       

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }

}
int main()
{
    int arr[5]={10,20,30,60,50};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubblesort(arr,5);
    
}


