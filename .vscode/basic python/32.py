inputstring=input("enter the elements: ")
a=inputstring.split(" ")

l1=[]
count=0
for item in a:
    if item not in l1:
        count += 1
        l1.append(item)

print("No of unique items are: " ,count)   
