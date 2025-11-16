#include <iostream>
#include <conio.h>
#include <climits>

using namespace std;
int main()
{
    int i, n;
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (i = 0; i < n; i++)
    {
        // if(arr[i]>maxNo){
        //     maxNo = arr[i];
        // }
        maxNo = max(maxNo, arr[i]);

        // if(arr[i]<minNo){
        //     minNo=arr[i];
        // }

        minNo = min(minNo, arr[i]);
    }
    cout << "MinNo = " << minNo << "\nMaxNo = " << maxNo << endl;

    getch();
    return 0;
} 