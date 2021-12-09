a=input("enter the numbers in list: ")
l=a.split(" ")
for num in l:
    num=int(num)
    if num<0:
        print(num,end=" ")