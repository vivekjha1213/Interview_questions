#include <iostream>
using namespace std;
int main(){
int arr[50];
int n;
cout<<"enter the lenght of the array "<<endl;
cin>>n;
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int pos;
int value;
cout<<"enter position which you want to insert"<<endl;
cin>>pos;
cout<<"enter the value which you want to add"<<endl;
cin>>value;

for(int i=n-1;i>=pos-1;i--){
    arr[i+1] = arr[i];
    arr[pos-1] = value;
}

cout<<""<<endl;

for(int i=0;i<=n-1;i++){
    cout<<arr[i];
}

int i;

cout<<"the result is"<<arr[i]<<endl;


    return 0;
}