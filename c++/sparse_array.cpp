#include<iostream>
#include<string>
using namespace std;


int main(){

int n;
cin>>n;
	string str[n];
    
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
int m;
cin>>m;
string s[m];
for(int j=0;j<m;j++){
    cin>>s[j];
}

for(int i=0;i<n;i++){

int count =0;
for(int j=0;j<m;j++)


    if(s[i]==str[j]){
        count++;
    }


cout<<count<<"\n";
}



	return 0; 
} 


