#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
  return ans;
}

int main()
{

    // int arr[] = {10, 20, 30, 20, 30};
    int arr[]={1,2,3,3,1};
    int size = 5;
    int final = findUniqueElement(arr, size);
    cout << "the Unique Element : " << final;

    return 0;
}