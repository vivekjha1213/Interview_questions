#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;
int q=0,p=0,z=0;
float arr[n];


for (int i = 0; i < n; ++i)
{
   cin>>arr[i];
   if (arr[i]>0)
   
   p++;
  
  else if (arr[i]<0)

     q++;
      else
         z++;


   }
cout<<p/n<<q/n<<endl;






   #ifndef ONLINE_JUDGE
   freopen("input.text", "r", stdin);
   freopen("output.text", "w", stdout);
   #endif

   return 0;
}


