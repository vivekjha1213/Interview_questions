#include <iostream>
using namespace std;
class Bst
{
 
 int data;
 BST *left,*right;
 public:
 BST();
 BST(int);
 BST* insert(BST *,int);
 void inorder(BST*);

};
BST :: BST(int value){
    data = value;
    left = right =NULL;

}
BST* BST :: insert(BST *root,int value){
    if (!root)
    {
        return new BST(value);


    }
    if(value > root->data)
    root->right = insert(root->right,value);

}
else 
{
    root->left = insert(root->left,value);
    return root;
    void BST :: inorder(BST *root)
    If(!root){
        return ;
    }
}
int main()
{
    BST b,root = NULL;
    b.insert(root,21);
    b.insert(root,22);
    b.insert(root,23);
    b.insert(root,24);
    b.insert(root,25);
    b.insert(root);

}