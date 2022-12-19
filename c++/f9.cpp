#include <iostream>
using namespace  std;
int Myfunint(int x , int y){
    return x+y;
}
int myfundouble(double x, double y){
    return x+y;

}
int main(){
   int m= Myfunint(3,7);
    double n = myfundouble(4.3 , 3.7);



cout<<"INT"<<m<<endl;
cout<<"double"<<n<<endl;



    return 0;
}