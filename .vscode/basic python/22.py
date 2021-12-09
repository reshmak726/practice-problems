inputstring=input("enter the elements: ")
l=inputstring.split(" ")
for num in l:
    num =int(num)
    if num>=0:
       print(f"the positive integers are {num}")