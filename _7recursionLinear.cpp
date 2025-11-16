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

bool linerSearch(int arr[], int size, int key ){
    if ( size == 0 ){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainPart = linerSearch(arr+1, size -1, key);
        return remainPart;
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key = 99;
    if(isSorted(arr,10)){
        cout<<"True"<<endl;
    }else{
        cout<<"false" <<endl;
    }

    cout<< "Key is available  0 (false) or 1(true): "<<linerSearch(arr, size, key) << endl;

    return 0;
}
