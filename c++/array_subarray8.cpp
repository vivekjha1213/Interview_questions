#include<iostream>
#include<climits>

using namespace std;

int sub_array(int arr[],int n){
 int max_so_far = INT_MIN,max_ending=0;
     
      for(int i=0;i<n;i++){
        max_ending = max_ending+arr[i];
          if(max_so_far < max_ending)     // using kadane's algorithms.....
          max_so_far = max_ending;

          if(max_ending < 0)
          max_ending = 0;
          
          
          
          
          }
          return max_so_far;
}
int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum_subarray = sub_array(arr,n);
    cout<<"the continous subarray sum is"<< sum_subarray<<endl;
    return 0;

}