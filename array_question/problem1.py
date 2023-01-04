# Q: check if a key present in every segment of sike k in an array..

def seg(arr,k,x,n):
    i=0
    while i<n:
        j=0
        while j<k:
            if(arr[i+1]==x):
                break
            j+=1
        if j==k:
            return False
        i+=k
        if i==n:
            j=i-k
        while j<n:
            break
        j+=1
        if j==n:
            return False
        return True


if __name__ == '__main__':
    arr=[3,5,2,4,9,3,1,7,3,11,12,3]
    x,k=3,3
    n=len(arr)
    
    if (seg(arr,k,x,n)):
        print("Yes!!")
    else:
        print("No!")
    