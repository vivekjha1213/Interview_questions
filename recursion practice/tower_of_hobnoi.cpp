#include<iostream>
#include<algorithm>

using namespace std;




void tower(int n,char A,char B,char aux_rod ){




//base case recursion..

if (n==1)
{
    
cout<<"Move the disk 1 from rod"<<A<<"to rod"<<B<<"\n";



return;

}
tower(n-1,A,aux_rod,B);

cout<<"Move the disk"<<"\n"<<"from aux"<<A<<"to rod"<<B<<endl;

tower(n-1,aux_rod,B,A);




}

 int main()
 {
     int n=4;
     tower(n,'x','y','z');
     return 0;
 }
 