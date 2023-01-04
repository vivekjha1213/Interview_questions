#include<iostream>
using namespace std;

int get_min(int arr[],int n )
{

return *min_element(arr,arr+n);

}


int get_max(int arr[],int n){



    return *max_element(arr,arr+n);
}
int main()
{
     int arr[] = { 12, 1234, 45, 67, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Minimum element of array: " << get_min(arr, n) << "\n"; 
    cout << "Maximum element of array: " << get_max(arr, n); 
    cout<<"\n";
    
    return 0;
}
