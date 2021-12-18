# a=str(input ("enter the string"))
# print("the original string " +a)
# r=sum(map(len,a.split()))
# print("avoiding spaces string" + str(r))

a=str(input("enter string "))
print("the original string " + a)
r=sum(not chr.isspace() for chr in a)
print("avoiding spaces " + str(r))