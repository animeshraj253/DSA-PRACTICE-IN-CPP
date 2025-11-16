#include <iostream>
#include <conio.h>

using namespace std;
int main(){

    int i;
    // values stored in ARRAY
    int ary[]= {12,23,45,56,87};

    cout<< "Enter all elements of ARRAY"<<endl;
    
    // you can change the value stored in ARRAY

    // code to take input and store it in ARRAY
    for(i=0; i<5;i++)
    {
        cin>>ary[i];
    }

    // code to print stored values of ARRAY
    for ( i=0; i<5;i++ )
    {
        cout<< "The value of array "<<i<< " is: "<<ary[i]<<endl;
    }
    
        // print valuse of ARRAY using WHILE LOOP

    i=0;
    while(i<5)
    {
        cout<<"The value of ARRAY "<< i <<" using WHILE LOOP is:" << ary[i]<<endl;
         i++;
    }

    
    
    // print valuse of ARRAY using DO WHILE LOOP
    i=0;
    do
    {
        cout<<"The value of ARRAY "<< i <<" using DO WHILE LOOP is:" << ary[i]<<endl;
        i++;
    } while (i<5);
    


    getch();
    return 0;
}