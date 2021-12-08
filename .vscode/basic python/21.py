inputstring=input("enter the elements of list: ")
l=inputstring.split(" ")
evencount,oddcount=0,0
for num in l:
    num=int(num)
    if num%2==0:
        evencount+=1
for num in l:
    num=int(num)
    if num%2!=0:
        oddcount+=1

print("even count of the number is: ",evencount)
print("odd count of the number is: ",oddcount)