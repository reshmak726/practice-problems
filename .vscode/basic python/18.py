# l=[]
# n=int(input("enter the elements: "))
# for i in range (n,n+1):
#     ele = int(input("enter the numbers: "))
#     l.append(ele)

# # for n in l:
# #     if n % 2==0:
# #         print(n,end=" ")
# even_nos=[num for num in n if num % 2==0]
# print("even numbers in the list",even_nos)


# l=[12,3,4,6,5,45,44]
inputstring=input("enter the list elements: ")
list=inputstring.split(" ")
for num in list:
    num = int(num)
    if num % 2 == 0:
        print(num,end=" ")