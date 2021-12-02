def swaplist(l,pos1,pos2):
    # storing two elements as a pairin a tuple variable get

    get = l[pos1],l[pos2]
    l[pos2],l[pos1]=get

    return l

l=[12,34,2,1]
pos1,pos2=1,4
print(swaplist(l,pos1-1,pos2-1))