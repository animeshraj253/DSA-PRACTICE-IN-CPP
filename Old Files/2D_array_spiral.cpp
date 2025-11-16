#include <iostream>

using namespace std;

// Printing array in spiral form

void print (int arr[][3], int row, int col){
    int count =0;
    int total = row * col;

    // initialisation of indices
    int srow=0; 
    int scol=0;
    int erow= row -1;
    int ecol= col -1;

    while (count < total){
        //Printing starting row
        for (int i=scol; count < total && i<=ecol;i++){
            cout<<arr[srow][i]<<" ";
            count++;
        }
        srow++;

        //Printing ending column
        for(int i=srow; count < total && i<=erow;i++ ){
            cout<<arr[i][ecol]<<" ";
            count++;
        }
        ecol--;

        //Printing ending row
        for(int i=ecol; count < total && i>=scol; i--){
            cout<<arr[erow][i]<<" ";
            count++;
        }
        erow--;

        //Printing starting column
        for(int i=erow; count < total && i>=srow;i--){ 
            cout<<arr[i][scol]<<" ";
            count++;
        }
        scol++;

    }
}

int main(){

    int row=4,col=3;
    int arr[4][3];

    // taking input
    for(int i=0;i<row;i++){
        for (int j=0 ; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //printing array
    cout<<"Array is: "<<endl;
    for(int i=0 ; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    print(arr,row,col);

    return 0;
}