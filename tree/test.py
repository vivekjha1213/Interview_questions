class Solution(object):
    def mergeTrees(self, root1, root2):
        if root1 == None:
            return root2
        if root2 == None:
            return root1
        root1.val += root2.val
        root1.left = self.mergeTrees(root1.left,root2.left)
        root2.right = self.mergeTrees(root2.right,root2.right)
        return root1
        