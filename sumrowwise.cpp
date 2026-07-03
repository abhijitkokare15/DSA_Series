#include<iostream>
using namespace  std;

void sumr(int arr[][3],int r,int c)
{
     for(int i=0;i<r;i++)
    {
         int sum=0;
        for(int j=0;j<c;j++)
        {
           sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
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

 sumr(arr,3,3);
    return 0;

}  

       


