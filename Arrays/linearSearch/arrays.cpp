#include <iostream>
using namespace std;

int main()
{
     //swapping array elements 
    // int arr[7] = {1, 2, 3, 4, 4, 5, 6};
    // int i=0;int j=6;
    // while(i<j){
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }
    // for(int k=0;k<7;k++){
    //     cout<<arr[k]<<" ";
    // }


    //Second Largest Element
    //  int ans=INT8_MIN;
    //  int secondMx=INT8_MIN;
    // int arr[9]={3,5,1,78,85,94,6,9};
    // for(int i=0;i<8;i++){
    //     if(arr[i]>ans){
    //         ans=arr[i];
    //     }
    // }
    // for(int j=0;j<8;j++){
    //     if(arr[j]==ans){
    //         continue;
    //     }
    //     else{
    //         if(arr[j]>secondMx){
    //             secondMx=arr[j];
    //         }
    //     }
    // }
    // cout<<"The Maximum Element : "<<ans<<endl;
    // cout<<"The Second Maximum Element : "<<secondMx;



    //fibonacci Series 
    // int n;
    // cout<<"Enter The Value of N:";
    // cin>>n;

    // int arr[1000];

    //  arr[0]=0;
    //  arr[1]=1;

    // for(int i=2;i<=n-1;i++){
    //     arr[i]=arr[i-1]+arr[i-2];

    // }
    // cout<<"The Number at "<<arr[n-1]<<" ";


    //Rottate an array by 1
    int n=8;
    int arr[8]={3,5,4,1,6,9,8,10};
    int temp=arr[n-1];

    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}