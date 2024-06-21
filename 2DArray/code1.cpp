#include <iostream>
using namespace std;

int main()
{

    // Initialization of 2 Dimensional array

    // int arr[3][4] = {{12, 33, 30, 32}, {12, 33, 30, 32}, {12, 33, 30, 32}};
    // // int arr2[3][3]={{1,2,3},{3,4,4},{5,6,4}};
    // int row = 3;
    // int column = 4;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // Printing Columns  Elemenmts 
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // int row = 3;
    // int col = 3;

    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }



    // Printing Diagonal Elemenmts 

    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // int row = 3;
    // int col = 3;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    
    int arr[3][3] = {{1, 2, 100},
                    {4, 200, 6},
                    {300, 8, 9}};

    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j==2)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}