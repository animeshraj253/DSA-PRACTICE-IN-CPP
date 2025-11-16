#include <iostream>
#include <climits>
using namespace std;

void colsum(int arr[3][3], int row, int col){
	
	int max=INT_MIN;
	int r;
	for(int i=0;i<col;i++){
		int sum=0;
		for(int j=0; j<row;j++){
			sum = sum + arr[i][j];
		}                         
		if(max<sum){
			max=sum;
			r=i;
		}		
	}
	
	cout<<"Largest sum is: "<<max<<endl;
	cout<<"Row number is: "<<r<<endl;
}

int main(){
	int row=3, col=3;
		
	int arr[3][3];
	
	cout<<"Enter all elements\n";
	for(int i=0;i<row;i++){
		
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Arrays are:\n";
	for(int i=0;i<row;i++){
		for(int j=0; j<col; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"calling function\n";
	colsum(arr, row, col);
		
	return 0;
}
