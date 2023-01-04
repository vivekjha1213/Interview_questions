#  given an algorithms for finding maximum element in tree .
#  class newNode:
#      def __init__(self,data):
#          self.data = data
#          self.left=self.right = None
        

#  def findmax(root):
#      if (root == None): base case for resursion..
#          return float('-inf')
    
#      res = root.data
#      lres = findmax(root.left)
#      rres = findmax(root.right)
#      if(lres > res):
#          res=lres
#      if(rres >res):
#          res = rres
#          return res



#  if __name__ == '__main__':
#      root = newNode(2)
#      root.left = newNode(7)
#      root.right = newNode(5)
#      root.left.right = newNode(6)
#      root.left.right.left = newNode(1)
#      root.left.right.right = newNode(11)
#      root.right.right = newNode(9)
#      root.right.right.left = newNode(4)
    
#      print("The Maximum element is : "),
#      findmax(root)
    
     

# Python3 program to find maximum
# and minimum in a Binary Tree

# A class to create a new node


class newNode:
	def __init__(self, data):
		self.data = data
		self.left = self.right = None

# Returns maximum value in a
# given Binary Tree


def findMax(root):

	# Base case
	if (root == None):
		return float('-inf')

	res = root.data
	lres = findMax(root.left)
	rres = findMax(root.right)
	if (lres > res):
		res = lres
	if (rres > res):
		res = rres
	return res


# Driver Code
if __name__ == '__main__':
	root = newNode(2)
	root.left = newNode(7)
	root.right = newNode(5)
	root.left.right = newNode(6)
	root.left.right.left = newNode(1)
	root.left.right.right = newNode(11)
	root.right.right = newNode(9)
	root.right.right.left = newNode(4)

	# Function call
	print("Maximum element is",
		findMax(root))


