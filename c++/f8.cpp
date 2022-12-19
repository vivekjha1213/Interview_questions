#include <iostream>
using namespace std;
void swap(int &x,int &y){    //call  by  refrence
    int z = x; 
    x = y;
    y = z;
}
int main(){
    int f = 10;
    int s = 30;
    cout<<"before swap"<<endl;
    cout<<f<<endl;
    cout<<s<<endl;
    swap(f,s);
    cout<<"afer swap"<<endl;
    cout<<f<<endl;
    cout<<s<<endl;
    
    return 0;
}