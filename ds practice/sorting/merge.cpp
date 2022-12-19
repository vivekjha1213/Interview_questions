#include<iostream>
using namespace std;
void merge_sort(int arr[],int l,int m,int r){

int n1 = m-l+1;
int n2=r-m;

int L[n1],R[n2]; 



for (int i = 0; i < n1; i++)
{
    L[i] = arr[l+i];
   for (int  j = 0; j <n2; j++)
   {
       R[i]=arr[m+l+j];
       
   }
   
}
// merge the array into temp array back into arr[l,r];

int i=0;
int j=0;
int k=l;

while (i<n1 && j<n2)
{
    
    if (L[i]<=R[j])
    {
        arr[k] = L[i];
        i++;

    }
    else
    {
        arr[k] =L[i];
        j++;
    }
    k++;
    
}

while (i<n1)
{

    arr[k] =L[i];
    j++;
    k++;
}



while (j<n1)
{

    arr[k] =R[j];
    j++;
    k++;
}




}

void merge(int arr[],int l,int r){

if (l>=r)
{
    return; //recursive return the value..
}

int m=(l+r)/2;
merge(arr,l,m);
merge(arr,m+1,r);
merge_sort(arr,l,m,r);




}
void print(int arr[],int n){

for (int i = 0; i < n; i++)
{
   cout<<arr[i];
   cout<<endl;
}


}
int main()
{
int arr[]={0,3,2,14,23,22,12,34,76};
int n=sizeof(arr)/sizeof(arr[0]);
merge(arr,0,n-1);
print(arr,n);


    return(0);
}