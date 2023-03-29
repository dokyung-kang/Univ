list=[]
num=1
for i in range(0, 3):
    list.append([])
    for k in range(0,4):
        list[i].append(num)
        num+=1

print(list)
print(len(list[0]))
print(len(list))
