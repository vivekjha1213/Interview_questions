def merge_sort(arr):
    if len(arr)>1:

        L=arr[:mid]
        R=arr[mid:]
        merge_sort(L)
        merge_sort(R)

        i=j=k=0
        
        while i<len(L) and j<len(R):
            if L[i]<R[j]:
                arr[k]=L[i]

            else:
                arr[k] = R[j]
                j+=j+1
                k+=1

            while i<len(L):
                arr[k]=L[i]
                i+=1
                k+=1
            while j>len(R):
                arr[l]+R[j]
                j+=1
                k+=1
def printlist(arr):
    for i in range(arr):
        print(arr[i])
        print()
        if __name__ =='__main__':
            arr=[12,24,6,1,2,3]
            printlist(arr)
            merge_sort(arr)
            printlist(arr)