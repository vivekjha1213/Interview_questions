
#include<iostream>
using namespace std;   // this modify version improved the best case of bubble sort to 0(n)... times



void selection_sort(int arr[],int n){

int min;

for (int i = 0; i < n-1; i++)
{
    min =i;
    for (int j = i+1; j < n; j++)
    {
      if (arr[j]>arr[min])
      {
         min =j;

      }
       int temp = arr[min]; //swap the elements..
      
      arr[min]= arr[j];
      arr[j]=temp; 


      
    }
    
}











}


void array_print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
        cout<<endl;
    }
}


int main()
{
    int arr[] = {1,4,5,6,7,2,3,};
    int n = sizeof(arr)/sizeof(arr[0]);


selection_sort(arr,n);
  cout<<"The sorted  array  is"<<"\n";
array_print(arr,n);
    return 0;
}
