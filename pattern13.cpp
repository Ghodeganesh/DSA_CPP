#include <iostream>
using namespace std;

// int pattern10(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= 2 *i - 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//      for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= 2 *i - 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

int pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    pattern11(num);
}