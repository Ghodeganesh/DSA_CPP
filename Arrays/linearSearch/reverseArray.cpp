#include<iostream>
using namespace std;

int main(){
    // cout<<"Hello";
    int arr[10]={1,2,3,4,5,6,7,8,9 };
    int d=3,n=10;
    int temp[10];
    int arr1[10];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
   for(int i=0;i<d;i++){
    cout<<temp[i]<<" ";
   }
cout<<endl;
   for(int i=d;i<n;i++){
     arr1[i-d]=arr[i];
   }
    for(int i=0;i<n-d;i++){
    cout<<arr1[i]<<" ";
   }

}