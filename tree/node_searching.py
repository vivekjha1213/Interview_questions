class Node:
    def __init__(self,key):
        self.left=self.right=None
        self.val=key

def preorder(root):
    if root:
        print(root.val)
        preorder(root.left)
        preorder(root.right)
    

def searching(root,data):
    if not root:
        return 0
    if root.data == data:
        return 1
    else:
        temp=searching(root.left,data)
        if temp == 1:
            return temp
        else:
            return searching(root.right,data)
        



if __name__=='__main__':
    root=Node(1)
    root.left=Node(2)
    root.right=Node(3)
    root.left.left=Node(4)
    root.left.right=Node(5)
    root.left.right.left=Node(6)
    root.left.right.right=Node(7)
    
    print("The tree in preorder.....")
    key=3
    searching(root,key)
    preorder(root),
    
    