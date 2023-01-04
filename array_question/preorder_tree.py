
def preorder(self,root):
    if root == None:
         return
         print(root.data)
         self.preorder(root.left)
         self.preorder(root.right)
           
