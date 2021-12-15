inp=input('enter the elements: ')
a=inp.split(" ")
print("the list contains : ",a)
i,j=2,8
res=True

for ele in a:
    ele=int(ele)
    if ele < i or ele>=j:
        res=False
        break
print("does list contain all elements in range: " + str(res))