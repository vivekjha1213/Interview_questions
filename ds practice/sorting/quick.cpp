#include<iostream>
using namespace std;

void swap(int* a,int* b){

int temp=*a;
*a=*b;
*b=temp;

}


int partition(int arr[],int low,int high){

int pivot=arr[high]; //pivot..
int i=(low-1);
for (int j = low; j <=high-1; j++)
{

    if (arr[j]<pivot)
    {
        i++;
        swap(&arr[i],&arr[j]);

    }
    
   
}

swap(&arr[i+1],&arr[high]);
return (i+1);



}
void Quick_sort(int arr[],int low ,int high){

if (low < high)
{
   int pi= partition(arr,low,high);

Quick_sort(arr,low,pi-1);
Quick_sort(arr,pi+1,high);

}








}





void print(int arr[],int n){


for (int i = 0; i < n; i++)
{
    cout<<arr[i];
    cout<<""<<endl;
}


}

int main(){
    int arr[]={3,1,2,53,12,13,44};
    int n=sizeof(arr)/sizeof(arr[0]);
      
      
       Quick_sort(arr,0,n-1);
        print(arr,n);
    
  
 
   
   
    return(0);
}