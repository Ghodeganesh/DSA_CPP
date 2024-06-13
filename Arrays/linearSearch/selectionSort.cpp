#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int arr[8] = {5, 2, 9, 1, 3, 10, 0, 8};
    cout << "The Unsorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 8 - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    cout << "The Sorted Array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}