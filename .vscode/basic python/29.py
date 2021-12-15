# l1=["resh","hello",[1,2]]
# l2=["resh",[1,2],"my"]
# print("the original list 1 is: " + str(l1))
# print("the original list 2 is: " + str(l2))
# r=[]
# for i in l1:
#     if i not in l2:
#         r.append(i)
# for i in l2:
#     if i not in l1:
#         r.append(i)

# print("the uncommon of two lists are: " + str(r))

inputstring = input("enter list 1")
a=inputstring.split(" ")
inputstring2 = input("enter string 2")
b=inputstring2.split(" ")

r=[]
for i in a:
    if i not in b:
        r.append(i)

for i in b:
    if i not in a:
        r.append(i)

print("the uncommon in two lists are: " + str(r))
