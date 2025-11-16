#include<iostream>
using namespace std;

void merge(int *arr, int s , int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    int mainArrayIndex = s;
    for (int i = 0; i<len1; i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    // not inportant
    mainArrayIndex = mid+1;
    for (int i = 0; i<len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge 2 sort
    int inx1 = 0;
    int inx2 = 0;
    mainArrayIndex = s;

    while(inx1 < len1 && inx2 < len2 ){
        if(first[inx1] <= second[inx2]){
            arr[mainArrayIndex] = first[inx1];
            mainArrayIndex++;
            inx1++;
        }
        else{
            arr[mainArrayIndex] = second[inx2];
            mainArrayIndex++;
            inx2++;
        }
    }
    while(inx1 < len1){
        arr[mainArrayIndex] = first[inx1];
        mainArrayIndex++;
        inx1++;
    }
    while(inx2<len2){
        arr[mainArrayIndex] = second[inx2];
        mainArrayIndex++;
        inx2++;
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;

    // left part sort krna hai
    mergeSort(arr,s,mid);

    // right part sort krna hai
    mergeSort(arr,mid+1,e);

    //
    merge(arr,s,e);
}   

int main(){
    int arr[] = {2,5,1,6,9};
    int n = 5;
    
    mergeSort(arr,0,n-1);
    
    for(int i : arr){
        cout<< i << " ";
    }
    cout<<endl;

    return 0;
}