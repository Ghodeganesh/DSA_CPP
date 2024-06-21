#include <iostream>
using namespace std;

int main()
{

    // Initialization of 2 Dimensional array

    int arr[3][4] = {{12, 33, 30, 32}, {12, 33, 30, 32}, {12, 33, 30, 32}};
    // int arr2[3][3]={{1,2,3},{3,4,4},{5,6,4}};
    int row = 3;
    int column = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}