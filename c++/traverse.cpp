#include<iostream>
using namespace std;

void traverse(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
}



int main(){
    int arr[]={2,3,4,5,6,3,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    traverse(arr,n);
    return 0;
}