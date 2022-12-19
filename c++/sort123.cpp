#include <iostream>
using namespace std;
int main(){
    int arr[5]={8,7,6,5,4};
    cout<<"The array before  sorting"<<endl;
    for(int i=0;i<5;++i){
     cout<<arr[i]<<endl;
      
    
    }
    cout<<"the array after sorting"<<endl;  
    for(int i=0;i<5;i++){
       
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
        
    }
    
 for(int i= 0;i<5;i++){
     cout<<arr[i]<<endl;
 }   

    
    
    
    
    
    return 0;

}