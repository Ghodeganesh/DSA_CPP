#include <iostream>
using namespace std;

int main()
{

    int arr[3][4] = {{10, 20, 32, 45}, {12, 13, 14, 14}, {32, 44, 20, 33}};
    int row = 3;
    int col = 4;
    int minVal = INT8_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
           minVal= min(arr[i][j],minVal);
            // if (arr[i][j] < min)
            // {
            //     min = arr[i][j];
            // }
        }
        
    }
        cout << "the minimum : " << minVal << endl;

}