
from collections import Counter
string=str(input("enter the string: "))
print("the original string is: " +string)
r=Counter(string)
r=min(r,key=r.get)

print("min of all characters are: " +str(r))