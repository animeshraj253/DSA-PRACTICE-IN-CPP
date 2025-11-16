#include<iostream>
using namespace std;

// Printing elements of array in wave form

void print(int arr[][3],int row, int col){

    for(int i=0;i<col;i++){
        // top to bottom
        if(i&1){
            for(int j=0;j<row; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        // bottom to top
        else{
            for(int j=col-1; j>=0;j--){
              cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main(){

    int row=3,col=3;
    int arr[3][3];

    // taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // printing array
    cout<<"Array is"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    print(arr,row,col);    

    return 0;

}