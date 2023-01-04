#include<iostream>
using namespace std;


struct Node
{
  int data;
  struct Node* left,*right;

    Node(int data)
  {
   this->data=data;
 left = right = NULL; 
  }
  
};

int hight_tree(Node* root){

if (!root)
return 0;
else
{
   int lhight = hight_tree(root->left);
   int rhight = hight_tree(root->right);


if (lhight>rhight)

    return (lhight +1);
    else return (rhight +1);
    



}
}



/*
void preorder(Node* root){

    if(!root)
    return;
    
    {
        cout<<root->data<<"";
        cout<<"\n";
        preorder(root->left);
        preorder(root->right);
    }
}*/

int main()
{
    struct Node* root = new Node(1);

   root->left = new Node(2);

root->right =new Node(3);

  root->left->left = new Node(4);

 root->left->right = new Node(5);

 //   preorder(root);


 hight_tree(root);

 cout<<"The hight of the tree is"<<""<<endl;

    
    return 0;
}
