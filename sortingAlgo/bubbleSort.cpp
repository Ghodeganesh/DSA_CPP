// #include <iostream>
// using namespace std;

// void sorting(int arr[], int n)
// {
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1 ; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = {4, 2, 1, 6, -2, 44, -1,5,0};
//     int size = 9;

//     cout << "before Sorting : " << endl;

//     for (int i = 0; i < size; i++)
//     {

//         cout << arr[i] << " ";
//     }
//     sorting(arr, size);
//     cout << endl;

//     cout<< "after Sorting : " << endl;

//     for (int i = 0; i < 9; i++)
//     {

//         cout << arr[i] << " ";
//     }

// }

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 55, 2, 11, 1, 0, -1, -2,1,1,0,0,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << size;
    cout << "befor sorting : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "after sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}