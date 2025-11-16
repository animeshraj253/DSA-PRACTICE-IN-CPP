#include <iostream>

using namespace std;

int main(){
    cout << endl;

    int row;
    cin>>row;

    int col;
    cin>>col;

    int **arr = new int* [row];

    for ( int i = 0; i < row; i++ ){
        arr[i] = new int[col];
    }

    // taking input
    for ( int i = 0; i<row; i++){
        for ( int j = 0 ; j< col; j++){
            cin>>arr[i][j];
        }
    }


    // printing array
    for ( int i = 0; i < row; i++){
        for ( int j = 0 ; j < col; j++){
            cout<<arr[i][j]<<" ";
        }cout << endl;
    }

    // releasing momory
    for ( int i = 0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;


    cout << endl;
    return 0;
}