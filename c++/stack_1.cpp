#include<iostream>         //implementation stack using array....
using namespace std;
#define size 5
int a[size];
int top = -1;
bool isempty(){


if(top == -1)
return true;
else 
return false;



}
void push(int value){
    if(top ==size-1){
        cout<<"stack is full,overflow /n";

    }
    else
    {
        top++;
        a[top]= value;

    }
    
}
 void pop()
 {
     if(isempty())
     cout<<"stack is empty \n";
     else
     {
         top--;
     }
     
 }

 void show_top()
 {
     if(isempty())
     {
         cout<<"stack is empty,underflow \n";
        
     }
     else
     {
         cout<<"elemenst atr top is "<<a[top]<<"\n";
         
     }
     
 }
 void displayStack(){

if(isempty()){
    cout<<"stack is empty";

}
else
{
    for(int i=0;i<=top;i++)
        cout<<a[i]<<"\n";
        cout<<"\n";
    

}
 }

int main(){


int choice,flag=1,value;

while(flag == 1){
    cout<<"\n.push.pop.some_top.dispaly_stack 5. exit"<<"\n";
   cin>>choice;switch (choice)
   {
   case1: cout<<"enter the value : \n";
       cin>>value;
       push(value);

       break;
case 2: pop();
break;

case 3: show_top();
break;

case 4: displayStack();
 break;

 case 5: flag=0;
 break;
 
}

}
    return 0;
 
}









/*
#include<iostream>
using namespace std;
#define max 1000
class stack{
int top;


public:
int arr[max];
bool Stack() { top = -1; }
  
   bool push(int x);
   int pop();
   int peek();
   bool isempty();
};

bool Stack :: push(int x){

if(top >= max-1)

    cout<<"stack is full \n";



}*/