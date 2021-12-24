def check(string):
    p=set(string)
    s={'0','1'}
    if s==p or p=={'0'} or p=={'1'}:
        print("yes")
    else:
        print("no")

string=str(input("enter the string: "))
check(string)