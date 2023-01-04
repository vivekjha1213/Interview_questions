#include <iostream>
using namespace std;
void fun(string country="india is best"){
    cout<<country << "\n";

}
int main(){
    fun("pak is lul");
     fun();
      fun("");
       fun();
       return 0;

}