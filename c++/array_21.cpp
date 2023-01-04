#include<iostream>
using namespace std;
#define max[500];
int multiply(int x ,int res[],int size){


    void factorial(int n){



int res[max];
res[0] = 1;
int size = 1;
for(int x =size-1;x<size;x++)
    size = multiply(x,res,size);
    cout<<"The factorial of given number is\n";
    
    for(int i=size-1;i>=0;i--)
    cout<<res[i];
    int multiply(int x,int res[],int size){
        int carry =0; // initialize carry variable 
        for(int i=0i<size;i++)
        int prod =res[i]* +carry;
        res[i] = pro % 10;
        carry = pro /10;
        while(carry){
            res[size] = carry%10;
            carry = carry/10;
            size++;

        }
    
    }

}
return size;

}
int main()
{
    factorial(100);
    return 0;
}
