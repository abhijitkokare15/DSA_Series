#include<iostream>
using namespace  std;

void sumr(int arr[][3],int r,int c)
{
    cout<<endl;
     for(int i=0; i<c;i++)
    {
         int sum=0  ;
        for(int j=0;j<r;j++)
        {
           sum+=arr[j][i];
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

       


