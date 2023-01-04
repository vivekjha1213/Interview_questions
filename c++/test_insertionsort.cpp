#include<iostream>
using namespace std;


void print_array(int arr[],int n){

for (int i = 0; i <n; i++)

    cout<<arr[i]<<"\n";
cout<<endl;

}

void insertion_sort(int arr[],int n)
{

int key,j;
for (int  i = 0; i < n; i++)
{
 key = arr[i];

 j =i;

while (arr[j-1]>key&& j>=1)
{
    arr[j] = arr[j-1];
    j--;
}
arr[j] = key;

}







}


int main()
{

    int arr[] = {3,5,2,1,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
cout<<"The original array is"<<"\n";
print_array(arr,n);

insertion_sort(arr,n);
cout<<"The sorted array is"<<"\n";
print_array(arr,n);
    
    return 0;
}
