#include <iostream>
using namespace std;
void array_print(int arr[],int n){
    cout<<"Enter elements in list"<<endl;
  
  
    for(int i=0;i<n;i++)
    {
  cin>>n;
    }
      cout<<""<<endl;
}
void selection_sort(int arr[],int n){
cout<<""<<endl;
for(int i = 0; i<n-1;i++){
    int min= i;
    for(int j= i+1;j<n-1;j++)
    {
        if(arr[j]< arr[min])
        {
        int min = j;
           
        }
    int temp = arr[min];
    arr[min ] = arr[i];
    arr[j] = temp;
    }
}
}
int main(){
   int arr[5]={9,8,7,5,4};
selection_sort(arr[],n);
array_print(arr[],n);

cout<<""<<arr[n];
return 0;


}
