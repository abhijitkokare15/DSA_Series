#include<iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid) {

    int len = e - s + 1;   // 
    int *temp = new int[len];

    int index1 = s;
    int index2 = mid + 1;
    int k = 0;

    while(index1 <= mid && index2 <= e) {
        if(arr[index1] < arr[index2]) {
            temp[k++] = arr[index1++];
        }
        else{
            temp[k++] = arr[index2++];
        }
    }

    while(index1 <= mid) {
        temp[k++] = arr[index1++];
    }

    while(index2 <= e) {
        temp[k++] = arr[index2++];
    }

    for(int i = 0; i < len; i++) {
        arr[s + i] = temp[i];
    }

    delete []temp;
}

void mergeSort(int *arr, int s, int e) {

    if(s >= e) {
        return;
    }
    
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
