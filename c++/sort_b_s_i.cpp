#include<iostream>
using namespace std;
void print(int arr[],int n){

for(int i=0;i<n;i++){
cout<<arr[i];
cout<<"\n";
}



}
/*void bubble(int arr[],int n){


for(int i=0;i<n;i++){
  for(int j=1+i;j<n;j++)
  if(arr[j+1] <arr[i]){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
}





}*/




/*
void selection_sort(int arr[],int n){

int i,j, min;

for(int i=0;i<n;i++){
  min=i;
  for(int j=i+1;i<n;j++)
if(arr[j] < arr[min])
min = j;

int temp = arr[min];
arr[min] = arr[i];
arr[i] = temp;
  
}

}*/

void insert_sort(int arr[],int n){
  int i,j,key;
  for(int i = 0;i<=n-1;i++)
  key = arr[i];
  j=i;
 while(arr[j-1]>key && j>=1){
   arr[j]=arr[j-1];
   j--;

 }
 arr[j]=key;
}



int main()
{
  int arr[]={5,4,3,2,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  //bubble(arr,n);
  
  
  //selection_sort(arr,n);
 
  insert_sort(arr,n);
   print(arr,n);
  return 0;
}
