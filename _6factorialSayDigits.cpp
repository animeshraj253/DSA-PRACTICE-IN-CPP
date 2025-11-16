#include<iostream>
using namespace std;

void sayDigits(int n){
    if(n==0)
        return;
    string digits[] = {"zero","one", "two", "three","four","five","six", "Seven","eight","nine"};

    // processing
    int digit = n%10;
    n = n/10;
    // cout<<digits[digit]<< endl;

    // recursion
    sayDigits(n);
    cout<<digits[digit]<< endl;
}

int main(){
    
    int n;
    cin>> n;
    cout<<endl << endl;
    sayDigits(n);

    cout<<endl;
 
    return 0;
}
