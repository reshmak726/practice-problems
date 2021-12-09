l=[2,3,[],5,[],78]
print("the original list is:"+str(l))
r=list(filter(None,l))
print("list after emplty list removal: "+str(r))