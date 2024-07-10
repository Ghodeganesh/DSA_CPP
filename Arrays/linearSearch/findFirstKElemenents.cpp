#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;

    int arr[] = {2, 4, 6, 10, 14, 17, 22, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr,arr+n);
    int k = 4, x = 14;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        int diff = abs(x - arr[i]);
        ans.push_back(diff);
    }
    cout << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }

    sort(ans.begin(),ans.end());
     for(int i=0;i<k;i++)
    {
        cout << i << " ";
    }

}