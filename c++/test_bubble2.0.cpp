
#include<iostream>
using namespace std;   // this modify version improved the best case of bubble sort to 0(n)... times





void bubble_sort(int arr[],int n){


int pass,i,swaped =1;

for (int pass = n-1; pass>=0 && swaped; pass++)
{
    swaped = 0;


    for (int j = 0; j <=pass-1; j++)

    {
        
if (arr[j]>arr[j+1])
{
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
    swaped = 1;
}
}  
}



















}



void array_print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<"\n";
    }
}


int main()
{
    int arr[] = {1,4,5,6,7,2,3,};
    int n = sizeof(arr)/sizeof(arr[0]);


bubble_sort(arr,n);
  cout<<"The sorted  array  is"<<"\n";
array_print(arr,n);
    return 0;
}
