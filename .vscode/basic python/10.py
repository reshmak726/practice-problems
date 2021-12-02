def cloning(l):
    l_copy=[]
    l_copy=l.copy()
    return l_copy

l=[10,23,12,0]
l2=cloning(l)
print("original list",l)
print("after cloning ",l2)
