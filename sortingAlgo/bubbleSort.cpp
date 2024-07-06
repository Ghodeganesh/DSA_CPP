#include <iostream>
using namespace std;

void sorting(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {4, 2, 1, 6, -2, 44, -1,5,0};
    int size = 9;

    cout << "before Sorting : " << endl;

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
    sorting(arr, size);
    cout << endl;

    cout<< "after Sorting : " << endl;

    for (int i = 0; i < 9; i++)
    {

        cout << arr[i] << " ";
    }

    
}
