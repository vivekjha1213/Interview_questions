class Node:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
    

    def inorder(root):
        if root is None:
            return 
        inorder(root.left)
        print(root.data)
        inorder(root.right)


    def Insert(root,key):
        if root is None:
            return Node(key)
        if key<root.data:
            root.left=Insert(root.left,key)
        #if key>root.data:
        else:
            root.right=Insert(root.right,key)
        return root

if __name__=='__main__':
    keys = [15, 10, 20, 8, 12, 16, 25]

    root = None
    for key in keys:
        root=Insert(root,key)
    inorder(root)


# # A class to store a BST node
# class Node:
#     left = right = None
 
#     # Function to create a new binary tree node having a given key
#     def __init__(self, data):
#         self.data = data
 
 
# # Function to perform inorder traversal on the tree
# def inorder(root):
 
#     if root is None:
#         return
 
#     inorder(root.left)
#     print(root.data)
#     print(" ")
#     inorder(root.right)
 
 
# # Recursive function to Insert a key into a BST
# def Insert(root, key):
 
#     # if the root is None, create a new node and return it
#     if root is None:
#         return Node(key)
 
#     # if the given key is less than the root node,
#     # recur for the left subtree
#     if key < root.data:
#         root.left = Insert(root.left, key)
 
#     # otherwise, recur for the right subtree
#     else:
#         # key >= root.data
#         root.right = Insert(root.right, key)
 
#     return root
 
 
# if __name__ == '__main__':
 
#     keys = [15, 10, 20, 8, 12, 16, 25]
 
#     root = None
#     for key in keys:
#         root = Insert(root, key)
 
#     inorder(root)