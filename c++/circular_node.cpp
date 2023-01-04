#include<iostream>
using namespace std;

struct Node
{
    int data;
    
    struct Node*next;

};
struct Node* head = NULL;
void insert(int newdata){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* ptr = head;
    new_node->data = newdata;
    new_node->next = head;
    if(head!=NULL)
    while (ptr->next !=head)
    ptr = ptr->next;
    ptr->next = new_node;
head = new_node;

}
void display(){
    struct Node* ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<"";
        ptr=ptr->next;
    }
    
}
int main(){
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(8);
    cout<<"The circular linkedlist is "<<endl;
    display();
    return 0;
}