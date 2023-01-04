total = 0
 

list1 = [11, 5, 17, 18, 23]
 

for ele in range(0, len(list1)):

    if ele <=total:

        total = total + list1[ele]
 

print(total)