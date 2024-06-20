#include <iostream>
using namespace std;
void findUniqueElement(int arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << " ";
}

int main()
{

    int arr[] = {10, 20, 30, 20, 30};
    int size = 5;

     findUniqueElement(arr, size);
    // cout << "the Unique Element : " << final;

    return 0;
}