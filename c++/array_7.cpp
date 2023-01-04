#include<iostream>
using namespace std;  //the cyclically roate an array 



void rotate(int arr[],int n){
    int x = arr[n-1];
    for(int i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=x;
}



int  main(){6
    int arr[]={1,2,3,4,5};
  int  n = sizeof(arr)/sizeof(arr[0]);
cout<<"the original array is"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
         rotate(arr,n);

cout<<"the rotate array is "<<endl;

   for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
     
    return 0;
}