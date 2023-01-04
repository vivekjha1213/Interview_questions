#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left,*right;
    Node(int data)
    {
        this->data=data;
      left->right=NULL;
    }
    
};
void print_inorder(struct Node* node)
{
    if(node == NULL)

    return;

    print_inorder(node->left);
   
    print_inorder(node->right);
     cout<<node->data<<"";
}
int main(){

struct Node*  root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);

 root->left->left = new Node(4);
 root->left->right = new Node(5);

cout<<"The Binary tree traversal is"<<endl;

print_inorder(root);



    return 0;
}