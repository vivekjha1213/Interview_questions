#include<iostream>
#include<algorithm>
using namespace std;

void bubble(int arr[],int n){
if(n == 1)

   return;   //base case of recursion

   for (int i = 0; i < n-1; i++)
   
      if (arr[i]>arr[i+1])
      
          swap(arr[i],arr[i+1]);
// Recursive call  for sorting..
          bubble(arr,n-1);


}

void print( int arr[],int n)
{
    for(int i=0;i<n;i++)

        cout<<"\n"<<arr[i];
     

   
}

int main()
{
    int arr[]={1,44,33,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
    print(arr,n);
    return 0;
}
