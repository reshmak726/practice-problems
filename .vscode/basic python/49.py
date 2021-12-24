from collections import Counter
string=str(input("enter the string: "))
print("the original string is: " +str(string))
r=[chr for chr , count in Counter(string).items() if count & 1]
print("odd frequency characters are: " +str(r))