#include<iostream>

using namespace std;

#define GREATER(a,b) ((a > b) ? a : b) 

int main(){
    cout << endl;

    int a,b;
    cin >>a>>b;

    cout <<"Greater number is " << GREATER(a,b) << endl;

    cout << endl;
    return 0;
}