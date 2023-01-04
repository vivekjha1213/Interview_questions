#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int 
       j=0;
       for(int i=0;i<n;i++){
           if(arr[i]<0){
               if(i!=0){
              int  temp = arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
                  
               }
           }
       }
}



void print_array(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<""<<arr[i]<<endl;
    }
}


int main(){
    int arr[]={-12,11,-13,-5,-7,-3,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
     print_array(arr,n);
       cout<<"The array after sort/n";
    reverse(arr,n);
    print_array(arr,n);


    return 0;
}