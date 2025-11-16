#include <iostream>
#include<conio.h>

using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    int arr[row][col];

    // Taking array as input (row wise)
    
    for (int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];    
        }
    }

    // Printing all elements
    
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}