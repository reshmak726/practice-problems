import re
string=str(input("enter string"))
print("original string is: " +str(string))
r=sum(1 for _ in re.finditer(r'\d+',string))
print("count of numerics: " +str(r))