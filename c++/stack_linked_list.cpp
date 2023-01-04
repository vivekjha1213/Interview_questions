#include<iostream>
using namespace std;

struct Node{

public:
int data;
struct Node* link;




};
struct Node* top;

void push(int data){



    //create new node temp and allocate memory ....

    struct Node* temp;
    temp = new Node();
    
     //check if the heap is full orr not..
     // then insert an the elements would...
     //lead to stack overflow..
     if (!temp)
     {
        cout<<"heap is overflow"<<endl;
        exit(1);
     }
     
    //initilize the data into temp data into temp data field 

    temp->data=data;
    //put top pointer refrence into temp link
    temp->link = top;
    //make temp as a top of the stack
    top = temp;



}
//utility function to check if..

//the stack is empty or not..

int isempty(){
    return top == NULL;
}

//utility function to return top element in a stack
int peek(){
    //check for empty stack;

    if(!isempty()){
        return top->data;
    }
    else 
    exit(1);
    }
    


