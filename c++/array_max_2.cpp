#include<iostream>
using namespace std;
#define max_size 100
int main(){
int arr[max_size];
int i;
int max,min,n;
cout<<"Enter size of the array \n";
cin>>n;

cout<<"enter the elements in the array\n";
for(int i=0;i<n;i++){
    cin>>arr[i];

}
max = arr[0];
min = arr[0];

for(int i=1;i<n;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
if(arr[i]<min){
    min = arr[i];
}
cout<<"the minmum number is\n";
cout<<max;
cout<<"the maximum number is\n";
cout<<min;



    return 0;
}