#include<bits/stdc++.h>

using namespace std;

bool isSorted(int *arr , int size){
    if(size == 0 || size == 1)
        return true;
    if(arr[0] > arr[1])
        return false;
    else{
        bool remainPart = isSorted(arr + 1, size - 1);
        return remainPart;
    }
}

void print(int arr[],int s, int e){
    for (int i = s; i<=e;i++ ){
        cout<<arr[i] << " ";
    }cout<<endl;
}

// bool binarySearch(int arr[], int size,int key ){
    // int s = 0;
    // int l = size - 1;

    // while ( s<=l){
    //     int mid = (s + l )  / 2;
    //     if ( arr[mid] == key){
    //         return true;
    //     }
    //     else if( arr[mid] < key){
    //         s = mid + 1;
    //     }
    //     else{
    //         l = mid - 1;
    //     }
    // }
    // return false;
// }
// recursive
bool binarySearch(int arr[], int s,int e, int key ){
    print(arr,s,e);
    if(s>e)
        return false;
    
    int mid = s + (e-s)/2;
    cout<<"value of Mid = " << arr[mid] << endl;

    if(arr[mid] == key)
        return true;

    if(arr[mid] < key){
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[] = {5,8,9,11,23,25,27,45,67,89};
    int size = 10;
    int key;
    if(isSorted(arr,10)){
        cout<<"True"<<endl<<endl;
    }else{
        cout<<"false"<<endl <<endl;
    }

    key = 25;
    bool present = binarySearch(arr, 0, size-1, key);
    cout<<"IS PRESENT = " << present << endl << endl;
    key = 9943;
    present = binarySearch(arr, 0, size-1, key);
    cout<<"IS PRESENT = " << present << endl<< endl;



    return 0;
}
