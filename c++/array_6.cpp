#include<iostream>
using namespace std;

void print_union(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j])
            cout<<arr1[i++]<<"/n";
            else if(arr2[j] < arr1[j])
           cout<<arr2[j++]<<"/n";
           else{
               cout<<arr2[j++]<<"";

               while(i<m){
                   cout<<arr1[i++];
                   while(j<n){
                       cout<<arr2[j++];
                   }
               }
           }
            
        }
     
    
}



int main()

{
     int arr1[] = { 1, 2, 4, 5, 6 }; 
    int arr2[] = { 2, 3, 5, 7 }; 



    int m=sizeof(arr1)/sizeof(arr1[0]);
     int n=sizeof(arr2)/sizeof(arr2[0]);

    print_union(arr1,arr2,m,n);
    return 0;
}