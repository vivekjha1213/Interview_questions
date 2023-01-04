#to check the array is sorted orr not using recursion..

def sort(n):
    if len(n)==1:
        return True
    return n[0]<=n[1] and sort(n[1:])
n=[1,2,3,4,5,6]
print("The sorted list is:")
print(sort(n))