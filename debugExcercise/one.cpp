#include <iostream>
using namespace std;


// int linearSearch(int arr[], int n, int val)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == val)
//         {
//             return arr[i];
//         }
//     }
//     return false;
// }

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j+1] = i+2;
        arr[j] = i+1;
        j++;
    }
}
int main()
{
    // Problem 01

    // int n, sum=0;
    // cout<<"Enter Array Size: ";
    // cin >> n;
    // int input[10];
    // for(int i=0;i<n;i++){
    //     cout<<"Entre Value: ";
    //     cin >> input[i];
    // }
    //  for(int i=0; i<n; i++){
    //      sum = sum + input[i];
    //  }
    // cout << sum << endl;
    // return 0;

    // Problem 02
//     int arr[]={12,32,11,23,4};
//     int size=5;
//     int target=4;
//    int ans= linearSearch(arr,size,target);
//    cout<<"ans: "<<ans;


        int arr[]={12,32,11,23,4};
       int size=5;
 
   populate(arr,size);
}