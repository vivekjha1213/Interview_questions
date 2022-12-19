#include <iostream>
using namespace std;
int main(){
    int i,n,arr[50]={3,4,6,78,9};
    
    
    for(i=0;i<=50;i++){
        cout<<arr[i]<<endl;


    }
    cout<<"the insert array is at position"<<endl;

int pos ;
int value;

cout<<"enter the postion of array"<<endl;
cin>>pos;
cout<<"enter number to insert"<<endl;
cin>>value;



for(int i =n-1;i>=pos-1;i--){
   arr[i+1] = arr[i];
   arr[pos-1] = value;
     cout<<"print the array"<<endl;
}

   for(i=0;i<=n-1;i++){
        cout<<arr[i]<<endl;
        cout<<"coding is fun!!"<<endl;



   }



    
    return 0;
}