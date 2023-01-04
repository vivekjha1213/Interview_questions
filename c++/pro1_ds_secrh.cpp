#include<iostream>
using namespace std;
void printarray(int a[],int n){
    cout<<""<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void search(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                cout<<"dublicate exits"<<a[i]<<endl;
                return;

        
            }
        }
  
    }
    cout<<"the dublicate elements is not present array"<<endl;
    cout<<""<<endl;

}
int main(){

int a[]={2,3,2,4,5,6,7};
int n = sizeof(a)/sizeof(a[0]);
cout<<""<<endl;
printarray(a,n);
cout<<""<<endl;
search(a,n);



    return 0;
}