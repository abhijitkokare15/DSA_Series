#include<iostream>
using namespace std;
int Binary_serach(int arr[],int size,int key)
{
    int start = 0; 
    int end =size-1;
    int mid=start+(end-start);
    
    while(start<=end)
    {
        
        if(arr[mid]==key)
        { 
            return mid;
        }
          
        else if(key>arr[mid])
        {

            start=mid+1;
        }

        
        else{

            end=mid-1;
           
        }
       mid=start+(end-start);

    }

    return -1;



}


int main()
{
    int arr[5]={1,2,3,5,9};
    
   int ans=  Binary_serach(arr,6,2);
   cout<<ans;
    return 0;
}