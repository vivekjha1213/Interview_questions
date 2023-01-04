#include<iostream>
using namespace std;       
                              
  /*  algorithms                                  
                                        
Step 1: IF FRONT = NULL
Write " Underflow "
Go to Step 5
[END OF IF]
Step 2: SET PTR = FRONT
Step 3: SET FRONT = FRONT -> NEXT
Step 4: FREE PTR
Step 5: END

*/



struct Node
{
    int data;                 
    struct Node* next;
   
    
};
struct Node* front;
struct Node* rear;

void insert();
void del();
void display();





int main() 
{

int choice;
while (choice!=4)
{
    cout<<"========main menu===========\n";
    cout<<"****************************\n";
    cout<<"\n1.insert an elements \n2.delete an elements\n3.display\n4.exit\n";
    cout<<"Enter your choice \n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
     case 2:
     del();
         break;

     case 3:

      display();

      break;

    case 4:
       exit(0);

    default:
        break;
    }
}



}

void insert(){

struct Node *ptr;
int item;
ptr = (struct Node*) malloc(sizeof(struct Node));
if(ptr == NULL){
    cout<<"Overflow\n";
    return ;

}
else
{
    cout<<"Enter the Value\n";
    cin>>item;
    ptr->data = item;
    if(front == NULL){
    front = ptr;
    rear = ptr;
    front->next = NULL;
    front->next = NULL;

    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;

 
        }
    
     }

 }
 void del(){
     struct Node *ptr;
     if(front == NULL){
         cout<<"underflow\n";
         return;
     }
     else
     {
         ptr = front;
         front = front->next;
         free(ptr);
     }
     
 }
 void display(){
     struct Node *ptr;
     ptr = front;
     if(front == NULL){

         cout<<"printing the Value of queue\n";


     }
     else
     {
         while(ptr!=NULL){
             cout<<"\n";
             ptr=ptr->next;
         }
     }
     
 }