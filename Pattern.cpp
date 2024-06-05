#include <iostream>
using namespace std;

int main()
{
    // program for square starts
    // int n;
    // cout << "Enter The Values of N:" << endl;
    // cin >> n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // program for rectangle
    // int rowN, colN;
    // cout << "Enter The Values of Row and Col:" << endl;
    // cin >> rowN;
    // cin >> colN;
    // for (int row = 1; row <= rowN; row++)
    // {
    //     for (int col = 1; col <= colN; col++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // program for hollow square

    // int row, col;
    // cout << "Enter the Total row : ";
    // cin >> row;
    // cout << "Enter the Total col : ";
    // cin >> col;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i == 0 || i == row - 1)
    //         {
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             if (j == 0 || j == col - 1)
    //                 cout << " * ";
    //             else
    //                 cout << "   ";
    //         }
    //     }
    //     cout << endl;
    // }

    // int num;
    // cout << "Enter Number: ";
    // cin >> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    int num;
    cout << "Enter Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j>=i; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
