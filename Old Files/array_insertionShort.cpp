#include <iostream>
#include <conio.h>
using namespace std;


void print (int arr[],int n,int test){

    cout<<"NEW ARRAY"<<endl;
    cout<<test<<":- ";        // 12 45 23 51 19 8
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i,current, j,test=1;

    for(i=1;i<n;i++){
        current=arr[i];

        j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
            test++;
            print(arr,n,test);
        }
        arr[j+1]=current;
    }

    cout<<"FINAL ARRAY"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    getch();
    return 0;
}