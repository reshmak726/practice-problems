from collections import Counter
l=[1,1,2,3,2,3,2,4,5,6,7,8]
d=Counter(l)
print(d)
new=list([item for item in d if d[item]>1])
print(new)