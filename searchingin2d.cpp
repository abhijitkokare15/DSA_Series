#include<iostream>
using namespace  std;

bool ispresent(int arr[][3],int r,int c,int ele)
{
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]== ele)
            {
                return 1;
            }
        }
    }
    return 0;
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

    int ele;
    cin>>ele;

  if(ispresent(arr,3,3,ele))
  {
    cout<<"element"<<ele<<"is present"<<endl;

  }
   else{
    cout<<"element"<<ele<<"is not  present"<<endl;
   }
    return 0;

}

       


