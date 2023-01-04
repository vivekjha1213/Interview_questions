def min(arr,n):
    res = arr[0]
    for i in range(1,n,1):
        
        res = min(res,arr[i])
    return res


def Max(arr,n):
    res =  arr[0]
    for i in range (1,n,1):
        
        res =  Max(res,arr[i])
    return res

if __name__=='__main__':
    arr=[2,1,34,53,12]
    n=len(arr)
    
    print(min(arr,n))
    print(Max,n)