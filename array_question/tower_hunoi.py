
def TowerOfHanoi(n , start, mid, end):
	if n == 1:
		print("Move disk 1 from rod",start,"to rod",mid)
		return
	TowerOfHanoi(n-1, start, end, mid)
	print("Move disk",n,"from rod",start,"to rod",mid)
	TowerOfHanoi(n-1, end, mid, start)
		
# Driver code
n = 3
TowerOfHanoi(n, 'A', 'C', 'B')




