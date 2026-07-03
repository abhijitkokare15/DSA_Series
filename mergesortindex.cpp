#include<iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid) {

    int i = s;
    int j = mid + 1;

    while(i <= mid && j <= e) {

        if(arr[i] <= arr[j]) {
            i++;
        }
        else {
            int value = arr[j];
            int index = j;

            // shift elements right
            while(index > i) {
                arr[index] = arr[index - 1];
                index--;
            }

            arr[i] = value;

            // update pointers
            i++;
            mid++;
            j++;
        }
    }
}

void mergeSort(int *arr, int s, int e) {

    if(s >= e)
        return;

    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e, mid);
}

int main() {

    int arr[4] = {4,1,3,2};
    int n = 4;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
} 