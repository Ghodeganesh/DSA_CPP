#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 1, 5, 6, 3, 33, -9, 99, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "befor sorting : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
 
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j];
            j--;
        }
        // swap(arr[j+1], key);
        arr[j+1]=key;
    }
    cout << endl;

    cout << "After sorting : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
