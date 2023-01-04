#include<iostream>    
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
        cout<<""<<endl;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";

    }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8};

int n = sizeof(arr)/sizeof(arr[0]);
cout<<"The orginal array\n";
print(arr,n);

reverse(arr,0,n-1);

cout<<"The reverse array\n";

print(arr,n);




    return 0;
}