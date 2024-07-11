#include <iostream>
#include <numeric>
using namespace std;

bool isPossibleSolution(int arr[], int size, int student, int mid)
{
    int std = 1;
    int pageCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageCount + arr[i] <= mid)
        {
            pageCount += arr[i];
        }
        else
        {
            std++;
            if (std > student )
            {
                return false;
            }
            pageCount += arr[i];
        }
    }
    cout << "the total pageCount: " << pageCount << " ";

    return true;
}

int main()
{

    int arr[] = {19, 9, 30, 22,7};
    int size = sizeof(arr) / sizeof(int);

    int student;
    cout << "Enter Number of Student : ";
    cin >> student;
    int ans = -1;
    int start = 0;
    int end = accumulate(arr, arr + size, 0);

    while (start <= end)
    {
        int mid = (start + end) >> 1;

        if (isPossibleSolution(arr, size, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        // return ans;
        cout << "totalAns: " << ans << endl;

    }

    //completed ..
   
}

