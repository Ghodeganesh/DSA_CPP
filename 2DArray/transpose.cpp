#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 4, 3}, {32, 44, 21}, {54, 57, 44}};
    int row = 3;
    int col = 3;
    cout << "Before Transpose : "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << "After Transpose : "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}