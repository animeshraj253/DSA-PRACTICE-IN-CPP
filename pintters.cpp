#include <iostream>
#include <string>

using namespace std;

int main(){

    int n = 99;

    cout << "Value of 'n' = " << n << endl;

    // single pointer
    int *p;
    p = &n;

    cout << "Address of 'n' = " << p << endl;
    cout << "Value at 'p'  = " << *p << endl;

    // double pointer
    int **ptr;
    ptr = &p;

    cout << "Address of pointer 'p' = " << ptr << endl;
    cout << "Value at address 'ptr' = " << *ptr << endl;

    // 3star pointer
    int ***ptr3 = &ptr;
    cout << "Address of pointer 'ptr' = " << ptr3 << endl;
    cout << "Value at address 'ptr3' = " << *ptr3 << endl;

    return 0;
}