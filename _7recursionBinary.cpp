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

int linerSearch(int *arr, int size, int key ){
    if ( size == 0 ){
        return false;
    }

    
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key = 6;
    if(isSorted(arr,10)){
        cout<<"True"<<endl;
    }else{
        cout<<"false" <<endl;
    }
    // int n;
    // cin>>n;
    // cout<< "ans = "<< binarySearch(n, arr)<<endl;

    return 0;
}
