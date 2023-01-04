#include<iostream>
#define maxsize 5
using namespace std;        /* //algo..
                               step:-

                                   1:-
                                      if front =-1 orr front>rear:
                                       write 
                                            underflow condition...
                                              else
                                              {
                                                  set value = queue[front]
                                                  set front = front +1;
                                                  [end of if];
                                                  step 2:
                                                    exit:
                                              } */

void insert();
void del();
void display();
int front =-1;
int rear=-1;
int queue[maxsize];
int main(){
    int choice;

while(choice!=4){
    cout<<"************main menu \n";
    cout<<"===============\n";
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
        break;
        default:
        cout<<"Enter valid choice\n";


     }

   }
}
void insert()
{
    int item;
        cout<<"Enter the elements in queue \n";
        cin>>item;
        if(rear == maxsize-1){
            cout<<"over-flow \n";
            return ;

        }
        if(front == -1 && rear==-1){
   
        front= 0;

        rear= 0;

        }
        else
        {
            rear = rear+1;
        }
        
        queue[rear] =item;
        cout<<"Value inserted \n";
}

void del()
{
    int item;
    if(front ==-1 || front>rear)
    {
        cout<<"underflow \n";

    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front =-1;
            rear = -1;

        }
        else
        {
            front=front+1;

        }
        cout<<"Value deleted \n";
        
    }
    
}
void display(){
if(front ==-1){
    cout<<"queue is empty \n";

}
else
{
    for(int i=front;i<=rear;i++){
        cout<<queue[i];
        cout<<"\n";
    }
}








}