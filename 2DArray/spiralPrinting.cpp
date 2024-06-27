#include <iostream>
using namespace std;

int main()
{

    int arr[5][6] = {{1, 2, 3, 4, 5, 6},
                     {9, 8, 7, 6, 5, 4},
                     {1, 2, 3, 4, 5, 6},
                     {9, 8, 7, 6, 5, 4},
                     {1, 2, 3, 4, 5, 6}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Spiral Printing Of 2D Array
    cout << "Spiral Printing Of 2D Array" << endl;
    int left = 0;
    int right = 5;
    int top = 0;
    int bottom = 4;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        // cout << endl;

        for (int i = top; i <= bottom; i++)
        {

            cout << arr[i][right] << " ";
        }
        right--;
        // cout << endl;

        for (int i = right; i >= left; i--)
        {
            // cout<<"the bottom and i at "<<" "<<bottom<<i<<" "<<endl;

            cout << arr[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << arr[i][left] << " ";
        }
        left++;
    }
}