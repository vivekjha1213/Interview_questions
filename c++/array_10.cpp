#include<bits/stdc++.h>
using namespace std;


int traverse(int arr,int n){

     for(int i=0;i<n;i++){
       if (arr[abs(arr[i])] >= 0)
       arr[abs(arr[i])] = -arr[abs(arr[i])];
       else
       cout<<abs(arr[i])<<endl;
 }
 }
 
int main()
{    int arr[]={1,2,3,6,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    traverse(arr,);
    
    return 0;
}
