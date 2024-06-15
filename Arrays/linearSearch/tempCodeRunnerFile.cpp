#include<iostream>
using namespace std;

int main(){
    // cout<<"Hello";
    int j=-1;
    int n=9;
    int arr[]={1,1,0,0,1,0,1,0,1};

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;j<n;j++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}