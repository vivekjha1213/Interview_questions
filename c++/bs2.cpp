#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;

}
void bubble_sort(int arr[], int n){
    int swap;
    for(int i= 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap = arr[i];
                arr[i]=arr[j];
                arr[j]=swap;

            }
        }
    }
}

void printarray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
int arr[]={9,7,8,10,5,4,3};
int n = sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,n);
printarray(arr,n);



    return 0;
}