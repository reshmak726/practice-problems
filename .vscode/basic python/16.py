l=[]
num=int(input("enternumber of elements in list: "))
for i in range(1,num+1):
    ele=int(input("enter element: "))
    l.append(ele)

print("the largest element is: ",max(l))