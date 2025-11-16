#include <iostream>
using namespace std;

int main(){

    int row,col;

    cin>>row>>col;

    int arr[row][col];

    // taking input
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){ 
            cin>>arr[i][j];
        }
    }

    // printing array
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // finding row wise sum
    for(int i=0;i<row;i++){
        int sum=0;
        for (int j=0;j<col;j++){ 
            sum=sum+arr[i][j];
        }
        cout<<"Sum is: "<<sum<<endl;
    }

    return 0;
}