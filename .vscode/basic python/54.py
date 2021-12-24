def remove(string,i):
    for j in range(len(string)):
        if j==i:
            string=string.replace(string[i],"",1)
    return string

string=str(input("enter the string: "))
i=int(input("enter the value of i: "))
print(remove(string,i))