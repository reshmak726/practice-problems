l=[12,4,3,23]
print("the original list is",str(l))
res=[]
for ele in l:
    sum=0
    for digit in str(ele):
        sum+=int(digit)
    res.append(sum)

print("list integer summation: "+str(res))