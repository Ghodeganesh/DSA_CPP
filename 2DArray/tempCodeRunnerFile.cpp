#include <iostream>
using namespace std;

void takeInput(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter array elements at: " << i << " " << j << endl;

            cin >> arr[i][j];
        }
    }
}
int main()
{
    int row, col;
    int arr[row][col];

    cout << "Enter Number of Rows:";
    cin >> row;
    cout << "Enter Number of Column:";
    cin >> col;

    takeInput(arr, row, col);