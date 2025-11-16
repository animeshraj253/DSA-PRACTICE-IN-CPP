#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>

using namespace std;

int binarySearch(int arr[], int n, int key){
    // declaring starting and ending point
    int s = 0;
    int e = n;

    while (s <= e){
        int mid = (s + e ) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    // taking input of elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting elemens
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    // printing elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    
    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl; 
   
    getch();
    return 0;
}