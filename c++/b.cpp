#include<iostream>
using namespace std;
void print(int arr[],int n){

for(int i=0;i<n;i++){
cout<<arr[i];
cout<<"\n";
}



}




int main()
{
  int arr[]={5,4,3,2,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  //bubble(arr,n);

  print(arr,n);
  
  
  return 0;
}
