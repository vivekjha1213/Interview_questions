#include<iostream>
#include<algorithm>


using namespace std;

int find_min(int arr,int n){
    int diff=INT_MAX;

   sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
     
     if(arr[i+1] - arr[i] < diff)
     diff = arr[i+1]-arr[i];
    }

    return diff;
}





int main(){
    int arr[]={1,2,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

  
    cout<<"The minimum difference between any two elelments is"<<find_min(arr,n);
    return 0;
}