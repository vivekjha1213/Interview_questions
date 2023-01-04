def Min(arr,n):
    res = arr[0]
    
    for i in range(1,n):
        res= min(res,arr[i])
    return res 

def Max(arr,n):
    res=arr[0]
    for i in range(1,n):
        res = max(res,arr[i])
    return res


arr =[15, 16, 10, 9, 6, 7, 17]
n=len(arr)

MIN=Min(arr,n)
MAX=Max(arr,n)
print(MIN)
print(MAX)
Range=MAX-MIN
print(Range)