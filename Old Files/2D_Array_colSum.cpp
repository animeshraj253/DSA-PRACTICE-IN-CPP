
#include <iostream>

using namespace std;

void colsum(int arr[3][3], int row, int col){

	for(int j=0;j<col;j++){
		int sum=0;
		for(int i=0; i<row;i++){
			sum = sum + arr[i][j];
		}
		cout<<sum<<endl;
	}
}

int main(){
	int row=3, col=3;
		
	int arr[3][3];
	
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	colsum(arr, row, col);
		
	return 0;
}


