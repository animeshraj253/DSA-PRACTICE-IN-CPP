#include<iostream>
using namespace std;

int factorial(int n){
    // base case to stop
    if ( n == 0 )
        return 1;


    /*
    5! = 5 * 4!
       = 5 * 4 * 3! ans so on......   stop point is 0!
    n! = n * (n-1)!
       = n * (n-1) * (n-2)! and so on.... stop point is n-5 (here)  
    f(n)          =  n  *   f(n-1)
    biggerProblem           smallerProblem
    */


    int small  = factorial(n-1);
    int bigger = n * small;

    return bigger;

    // return n * factorial(n-1);
}


int main(){
    
    int n = 5;

    int ans = factorial(n);
    cout << "Fact = " << ans << endl;

    return 0;
}
