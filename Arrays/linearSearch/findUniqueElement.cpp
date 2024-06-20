#include <iostream>
using namespace std;

// int findUniqueElement(int arr[], int size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//   return ans;
// }

bool twoSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "the Ith index at " << i << endl;
                cout << "the value  at i: " << arr[i] << "," << endl;

                cout << "the Jth index at " << j << endl;
                cout << "the value at j: " << arr[j] << endl;

                return true;
            }
        }
    }
    return false;
}

int main()
{

    // int arr[] = {10, 20, 30, 20, 30};
    int arr[] = {1, 2, 3, 3, 1};
    int size = 5;
    int target = 42;

    bool val = twoSum(arr, size, target);
    if (val == true)
    {
        cout << "the Sum Found";
    }
    else
    {
        cout << "the Sum Not found";
    }
    // int final = findUniqueElement(arr, size);
    // cout << "the Unique Element : " << final;

    return 0;
}