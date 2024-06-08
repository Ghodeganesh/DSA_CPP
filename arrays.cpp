#include <iostream>
using namespace std;

int main()
{
    cout << "Hello"<<endl;
    int arr[7] = {1, 2, 3, 4, 4, 5, 6};
    int i=0;int j=6;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int k=0;k<7;k++){
        cout<<arr[k]<<" ";
    }
}