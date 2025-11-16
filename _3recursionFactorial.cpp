#include<iostream>
using namespace std;

int count(int n){

    cout<< n << " " ;

    if( n == 0 )
        return 0;

    // Tail Recursion
    // cout<< n << " " ;
    
    return count(n-1);
    // Head Recursion
    // cout<< n << " " ;

}
int main(){
    int n;
    cin>> n;

    count(n);

    return 0;
}
