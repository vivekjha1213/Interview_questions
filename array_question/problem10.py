list1=[1,2,3,4,5,6,7,8,]
list2=[9,3,5,12,13,14,15]


list3=list1+list2
list4=[]
print(list3)

for i in list3:
    if i not in list4:
        list4.append(i)
    else:
        print("the dublicate element is:"),
        print(i)