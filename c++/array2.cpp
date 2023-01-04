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
cout<<"enter position which you want to insert"<<endl;
cin>>pos;

if(pos>=0 || pos>size){
  cout<<"invalid number"<<endl;
else {
      int temp=arr[pos-1];
}
}


cout<<""<<endl;

for(int i=0;i<=n-1;i++){
    cout<<arr[i];
}

int i;

cout<<"the result is"<<arr[i]<<endl;


    return 0;
}