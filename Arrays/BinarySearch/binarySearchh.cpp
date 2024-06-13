#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int size;
    cout << "Enter The Size of array:";
    cin >> size;
    cout << "Enter The Values in Array In Assending Or Descending Order:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Entred Array Data : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int start = 0, end = size - 1, mid, target;
    cout << "Enter The Target Value:";
    cin >> target;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            cout << "the Value is at :" << mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    if (start > end)
    {

        cout << "The Target Value is Not Present ";
    }
}