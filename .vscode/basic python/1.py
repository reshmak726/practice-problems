def swaplist(l):
    l[0],l[-1]=l[-1],l[0]
    return l

l=[1,3,2,4]
print(swaplist(l))