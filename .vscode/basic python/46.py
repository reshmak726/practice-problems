def check(string):
    count =0
    vowels=set("aeiouAEIOU")
    for alphabet in string:
        if alphabet in vowels:
            count=count+1
    print("no of vowels: ",count)

string=str(input("enter the string: "))
check(string)  