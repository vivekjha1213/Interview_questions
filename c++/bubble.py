def bubble_sort(arr):
    n = len(arr)
    for i in range(0,n-1):

        for j in range(0,n-i-1):

            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j] #swap


print("the list before sort")
print('/n')
print("6,67,8,9,9,0")                
            
arr = [56,67,8,9,9,0]
bubble_sort(arr)



print("the list after sort")
for i in range(len(arr)):
    print(arr[i])
