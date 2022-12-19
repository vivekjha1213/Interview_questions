#include<iostream>
#include<algorithm>

using namespace std;



int binary(int arr[],int low,int high,int data){

int mid=low+(high-1)/2;
if (low>high)
return -1;

if (arr[mid]==data)
return mid;

if (arr[mid]>data)
{
   return binary(arr,mid+1,high,data);

   if (mid)
   {
    
   }
   
}


}

int main()
{
    int arr[]={2,1,3,2,1,2,3,4,5,6,6,7,7,7,7,8,8,};
    int data = 5;

  cout<<binary(arr,low,high,data);
    return 0;
}
