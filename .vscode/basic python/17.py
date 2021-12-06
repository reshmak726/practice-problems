l=[]
n=int(input("enter number of elements: "))
for i in range(1,n+1):
    ele=int(input("enter elements: "))
    l.append(ele)

print("the second largest element in list is",sorted(l)[-2])