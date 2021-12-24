def check(str1,str2):
    set_str1=set(str1)
    set_str2=set(str2)
    matched=set_str1 & set_str2
    print("no of matching characters are: " +str(len(matched)))

str1=str(input("enter string 1: "))
str2=str(input("enter string 2: "))
check(str1,str2)