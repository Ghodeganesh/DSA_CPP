#include <iostream>
using namespace std;

void findFirstOccurence(int arr[], int n, int target, int &index)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            index = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3,3, 5, 6, 7, 9};
    int n = 8;
    int target = 1;
    int index = -1;

    findFirstOccurence(arr, n, target, index);
    cout << "the index is : " << index;
}