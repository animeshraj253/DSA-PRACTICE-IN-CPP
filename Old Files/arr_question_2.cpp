#include <iostream>
#include <conio.h>
#include<climits>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int sum=0;

    for (int i=0;i<n;i++){
        int temp=0;
        for(int j=i;j<n;j++){
            
            temp += arr[j];
            sum+=temp;

            cout<<"j= "<<j<<endl; // just for understanding
            cout<<"temp = "<<temp<<endl;  // just for understanding

            cout<<"sum = "<<sum<<endl;

        }
    }
    


    getch();
    return 0;
}