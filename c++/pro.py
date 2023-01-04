def con(l1,l2):
    l1.sort()
    l2.sort()

    if l1 == l2:
        return True

    else:
        return False

l1=[1,2,5,2,1,3,8,9]
l2=[34,12,14,23,23,23]
print(con(l1,l2))

