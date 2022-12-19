#include<iostream>
using namespace std;

void Merge(int arr[],int low,int mid,int high) 
{

int n1=mid-1+1;
int n2=high-mid;
//create a temp array for the merge sorting,,

int L[n1];
int R[n2];
//copy the data from temp array..

for (int  i = 0; i < n1; i++)

      L[i]=arr[i+1];
    

    for (int j = 0; j < n2; j++)
    
         R[j]=arr[mid+1+j];
         
  //merge the temp array back into arr[l+r];

  //intitial index of the first subarray..

  int i=0;
  int j=0;

  //intial index of the merge sort subarray..
  int k=1;

  while (i<n1 && j<n2)
  
     if (L[i]<=R[j])
     {
         arr[k] =L[i];
         i++;

     }
     else
     {
         arr[k]=R[j];
         j++;

     }
     k++;
     
  
     //copy the array data remaining elements ..

     //L[],if there are array..

     while (i<n1)
     {
         arr[k]=L[i];
         i++;
         k++;

     }
    




     while (j<n2)
     {
         arr[k]=R[j];
         j++;
         k++;

     }
    









}

 void merge_sort(int arr[],int low,int high){

 if (low>=high)
 {
     return ;

 }
 int mid=1+(high-1)/2;
 merge_sort(arr,low,mid);  //call the function for 1st halves low to middle...
 merge_sort(arr,mid+1,high); // calll the merge function for  2nd halves middle to high..
 Merge(arr,low,mid,high); //Recursive call for merge sort..


 
  
 }

void print_array(int arr[],int n){

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"";

}


}
int main(){

    int arr[]={10,2,34,22,12,134};
    int n=sizeof(arr)/sizeof(arr[0]);
     print_array(arr,n);
   
    merge_sort(arr,0,n-1);

 print_array(arr,n);
    return (0);

}