#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    
    int inx1 = s;      // left subarray start
    int inx2 = mid + 1; // right subarray start
    
    int *temp = new int[e - s + 1];
    int tempIndex = 0;
    
    // merge using indices
    while(inx1 <= mid && inx2 <= e){
        if(arr[inx1] <= arr[inx2]){
            temp[tempIndex++] = arr[inx1++];
        } else {
            temp[tempIndex++] = arr[inx2++];
        }
    }
    
    // copy remaining from left
    while(inx1 <= mid){
        temp[tempIndex++] = arr[inx1++];
    }
    
    // copy remaining from right
    while(inx2 <= e){
        temp[tempIndex++] = arr[inx2++];
    }
    
    // copy temp back to original array
    for(int i = s, j = 0; i <= e; i++, j++){
        arr[i] = temp[j];
    }
    
    delete[] temp;
}

void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;
    
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    
    merge(arr, s, e);
}

int main(){
    int arr[] = {2, 5, 1, 6, 9};
    int n = 5;
    
    mergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}