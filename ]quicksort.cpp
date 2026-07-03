#include<iostream>
using namespace std;

int partition(int arr[],int s, int e)
{
    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot)
            cnt++;
    }

    int pi=s+cnt;

    swap(arr[pi],arr[s]);

    int i = s, j=e;
    while(i<pi && j>pi)
    
    {
        while(arr[i]<pivot)
        {
            i++;
        }
         while(arr[j]>pivot)
        {
            j--;
        }


        if(i<pi && j>pi)
        {
            swap(arr[i++],arr[j--]);
        }


    
    }
    return pi;
}



void quicksort(int arr[],int s,int e)
{
    // base condition

    if(s>=e)
    {
      return;
    }
    int p = partition(arr,s,e);

    // left part

    quicksort(arr,s,p-1);

    // right part
     quicksort(arr,p+1,e);

    
}

int main()
{

    int arr[10]={5,6,8,1,4,9,6,3,4,2};
    int n=10;


    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }

    cout<<endl;
 return 0;


    
}