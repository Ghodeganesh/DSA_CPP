#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{12, 4, 5}, {32, 4, 21}, {5, 57, 44}};
    int row = 3;
    int col = 3;
    int total = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // for Diagonal elements
    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i == j)
    //             total = total + arr[i][j];
    //     }
    // }
    // cout << "the total is for  all diagonal elements: " << total << endl;
 

 // for Reverse Diagonal Elements
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i + j==2)
                total = total + arr[i][j];
        }
    }
    cout << "the total is for  all diagonal elements: " << total << endl;
}