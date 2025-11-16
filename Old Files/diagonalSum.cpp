#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
       
    cin>>t;
    
    int arr [t][t];
 
    // taking input
    for (int i = 0 ; i<t; i++){
        for( int j = 0 ; j<t; j++){
            cin>>arr[i][j];
        }
    }
    
    // both diagonal
    int ans1=0, ans2=0;
    
    // main code
    for ( int i = 0 ; i< t; i++){
        for ( int j = 0; j<t;j++){
            if (i==j)
                ans1 += arr[i][j];
            if (i == t-j-1){
                ans2 += arr[i][j];
                cout << "ans 2 = " << ans2 << endl;
        }
        }
    }

    // printing ans
    cout << abs(ans1 - ans2);
 
    return 0;   
}