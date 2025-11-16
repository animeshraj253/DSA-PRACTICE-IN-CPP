#include <iostream>
using namespace std;

// ROTATE GIVEN ARRAY BY 90 DEGREE

void print(int arr[][3], int row, int col)
{
    // srow = starting row & erow = ending row and vice versa
    int srow = 0;
    int scol = 0;
    int erow = row - 1;
    int ecol = col - 1;

    int counter = 0;
    int total = row * col;

    while (counter < total)
    {
        // Printing first column
        for (int i = erow; counter < total && i >= srow; i--)
        {
            cout << arr[i][scol] << " ";
            counter++;
        }
        scol++;
        cout << endl;

        // Printing first row
        for (int i = scol; counter < total && i <= ecol; i++)
        {
            cout << arr[srow][i] << " ";
            counter++;
        }
        srow++;
        cout << endl;

        // Printing last column
        for (int i = srow; counter < total && i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
            counter++;
        }
        ecol--;
        cout << endl;

        // Printing last row
        for (int i = ecol; counter < total && i >= scol; i--)
        {
            cout << arr[erow][i] << " ";
            counter++;
        }
        erow--;
        cout << endl;
    }
}

int main()
{

    int row = 3, col = 3;
    int arr[3][3];

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // CALLING FUNCTION
    print(arr, row, col);

    return 0;
}