a=str(input("enter the string: "))
print("original string " +str(a))

half=len(a)//2
r=' '
for half2 in range(len(a)):
    if half2>=half:
        r+= a[half2].upper()
    else:
        r+=a[half2]

print("resultant string is " +str(r)) 