#include <iostream>
using namespace std;

// void pattern1(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void pattern2(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void pattern3(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >=i; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void pattern3U(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void pattern4(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }
// }

// int pattern5(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         int space = 2 * (n - i);
//         for (int j = 1; j <= space; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//      for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         int space = 2 * (n - i);
//         for (int j = 1; j <= space; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int pattern6(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i); j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int pattern7(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i); j++)
//         {
//             cout <<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i<<" ";
//         }
//         cout << endl;
//     }
// }

// int pattern8(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i); j++)
//         {
//             cout << "  ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j<<" ";
//         }
//         for (int j = 2; j <= i; j++)
//         {
//             cout << j<<" ";
//         }
//         cout << endl;
//     }
// }

// int pattern7(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i); j++)
//         {
//             cout <<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i<<" ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    // int num;
    // cout << "Enter The Num : ";
    // cin >> num;
    // pattern7(num);
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

    // int num;
    // cout << "Enter Number: ";
    // cin >> num;

    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = num; j>=i; j--)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // int r, c;
    // cout << "Enter R Number : ",
    //     cin >> r;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout<<endl;
    // }
    // int r, c;
    // cout << "Enter R Number : ",
    //     cin >> r;
    // cout << "Enter C Number : ",
    //     cin >> c;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if (i == 0 || i == r-1  || j == 0 || j == c-1 )
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
}
