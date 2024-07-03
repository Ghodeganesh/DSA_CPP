#include <iostream>
using namespace std;

int finComplement(int arr[], int n)
{
    int m = n + 1;
    int twoCom[m] = {0};

    for (int i = n - 1, k = m - 1; i > 0; i--, k--)
    {
        twoCom[k] = arr[i] == 1 ? 0 : 1;
    }
    cout << " 1s` Comp : " << " ";
    for (int i = 0; i < m; i++)
    {
        cout << twoCom[i] << " ";
    }
    cout << endl;

    int carry = 1;
    for (int i = m - 1; i >= 0; i--)
    {
        int sum = twoCom[i] + carry;
        twoCom[i] = sum % 2;
        carry = sum / 10;
    }
    cout<<" 2nd` comp : ";
    for (int i = 0; i < n + 1; i++)
    {
        cout <<twoCom[i] << " ";
    }

    // return twoCom;
}

int main()
{
    int arr[] = {1, 0, 0, 1, 0, 0, 1,1};
    int n = 8;
    cout << "normal arr :  " << " ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans = finComplement(arr, n);

    // cout << "twos complement : " << " ";
    // for (int i = 0; i <n+1; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}