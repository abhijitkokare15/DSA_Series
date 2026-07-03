#include<iostream>
using namespace std;

int firstoccurence(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid =s+((e-s)/2);
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e=mid-1;
        }

        else if(key>arr[mid])
        {
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid =s+((e-s)/2);
    }
    return ans;
}
    int lastoccurence(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid =s+((e-s)/2);
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
             s=mid+1;
        }

        else if(key>arr[mid])
        {
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid =s+((e-s)/2);
    }
     return ans;
 
}

int main()
{
    int even[5]={1,5,5,5};
    cout<<"The first occurence index of key is:"<<firstoccurence(even,4,5)<<endl<<"The last occurence index of key is:"<<lastoccurence(even,4,5);
    return 0;
}