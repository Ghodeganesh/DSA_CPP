#include <iostream>
using namespace std;

void printZerosAndOne(int arr[], int n)
{
    int zeroCout = 0;
    int oneCout = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCout++;
        }
        else
        {
            oneCout++;
        }
    }

    for (int i = 0; i < zeroCout; i++)
    {
        arr[i] = 0;
    }
    for (int i = zeroCout; i < n; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1, 1};
    int n = 9;
    cout << "Before" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    printZerosAndOne(arr, n);
    cout << endl;
    cout << "After" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}