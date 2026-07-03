#include<iostream>
using namespace std;

void insertionsort(int arr[], int n)
{ 
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 60, 50};

   
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionsort(arr, 5);
}
