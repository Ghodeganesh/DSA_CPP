#include <iostream>
using namespace std;

int main()
{
    //     int row, col;
    //     int arr[row][col];

    //     cout << "Enter Number of Rows:";
    //     cin >> row;
    //     cout << "Enter Number of Column:";
    //     cin >> col;

    //     for (int i = 0; i < row; i++)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             cout << "enter array elements at: " << i << " " << j << endl;

    //             cin >> arr[i][j];
    //         }
    //     }

    int arr[3][4] = {{1, 2, 3, 4}, {5, 3, 8, 9}, {1, 2, 39, 0}};
    // int arr2[3][3]={{1,2,3},{3,4,4},{5,6,4}};
    int row = 3;
    int column = 4;
    int target = 39;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target){
                cout << "target element found: " << i << " " << j;
            }
        }
       
    }
}