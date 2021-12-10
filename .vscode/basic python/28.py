l=[['a','b',1,2],['c','d',3,4]]
print("the original list : " + str(l))

r=dict()
for n in l:
    r[tuple(n[:2])]=tuple(n[2:])

print("the mapped dictionary : " + str(r))

