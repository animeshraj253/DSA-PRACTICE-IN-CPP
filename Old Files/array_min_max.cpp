#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int max = INT_MIN;
    int min = INT_MAX;
    
    int sum=0;

    int arr[5]={1,2,3,4,5};
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if (j==i)
            {
                continue;
            }   
            sum += arr[j];
            cout<<endl << sum << endl;
        }
        if(max<sum)
        {
            max = sum;
        }
        else
        { 
            min = sum;
        }

        sum = 0;
    }
    
    cout << min << " " << max << endl;;
    
    return 0;
}

