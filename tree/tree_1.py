class Node:
    def __init__(self,key):
        self.left = None
        self.right = None
        self.val = key
        
def inorder(root):
    if root:
        inorder(root.left)
        
        print(root.val),
        
        inorder(root.right)
        


#drive code to excute a program::::::



root = Node(1)
root.left=Node(2)
root.right=Node(3)
root.left.left=Node(4)
root.left.right=Node(5)

print("The inoreder traverse is :")

inorder(root)


        