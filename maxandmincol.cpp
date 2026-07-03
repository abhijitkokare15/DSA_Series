#include<iostream>
#include <limits.h>

using namespace  std;

void maxs(int arr[][3],int r,int c)

{ 
      int index;
    int maxi=INT_MIN;
     for(int i=0;i<c;i++)
    {  
         int sum=0;
       
        for(int j=0;j<r;j++)
        {
           sum+=arr[j][i];
        }


        cout<<sum<<endl;
        if(sum>maxi)
        {
            maxi=sum;
            index=i;
        }
          
    }
    cout<<"max sum:"<<maxi<<endl<<"index:"<<index<<endl;
}

void mins(int arr[][3],int r,int c)
{ 
     int index;
    int mini=INT_MAX;
     for(int i=0;i<c;i++)
    {  
         int sum=0;
        
        for(int j=0;j<r;j++)
        {
           sum+=arr[j][i];
        }


        cout<<sum<<endl;
        if(sum<mini)
        {
            mini=sum;
            index=i;
        }
         
    }
     cout<<"min sum:"<<mini<<endl<<"index:"<<index<<endl;
}

int main()
{
    int arr[3][3];
//taking rows wise input

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];

        }
    }
// giving  rowswise output
    for(int i=0;i<3; i++){

        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";

        }

        cout<<endl;
    }

 maxs(arr,3,3);
 mins(arr,3,3);
    return 0;

}  

       


