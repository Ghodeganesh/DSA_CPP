
#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{1, 4, 5, 3}, {32, 44, 21, 30}, {54, 57, 44, 33}};
    int row = 3;
    int col = 4;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < col; i++)
    {
        int total = 0;

        for (int j = 0; j < row; j++)
        {

            total = total + arr[j][i];
        }
        cout << "the total is for Column  : " << total << endl;
    }
}