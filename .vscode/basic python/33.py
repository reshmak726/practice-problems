def prod(val):
    r=1
    for ele in val:
        r*=ele
    return r

# inputstring=input("enter the list elements: ")
# a=inputstring.split(" ")
l=[1,2,3,4,5,4,5]
r=[]
for i in l:
    if i not in r:
        r.append(i)
r=prod(r)

print("duplication removal list product: " + str(r))