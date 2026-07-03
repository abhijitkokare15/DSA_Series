#include <iostream>
using namespace std;

int Binary_search(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int pivotele(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;   
}

int main()
{
    int arr[7] = {7, 9, 1, 2, 3, 4, 5};
    int size = 7;
    int key = 3;

    int pivot = pivotele(arr, size);

    int ans = -1;

    
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        ans = Binary_search(arr, pivot, size - 1, key);
    }
    else
    {
        ans = Binary_search(arr, 0, pivot - 1, key);
    }

    cout << "Element found at index: " << ans << endl;
    return 0;
}
