def sorted(A):
    if len(A)==1:
        return 0
    return A[0]<=A[1] and sorted(A[1:])

A=[127,72,42,25,727]
print(sorted(A))
