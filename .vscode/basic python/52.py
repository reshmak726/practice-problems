import re
def check(string):
    regex=re.compile('[@_!#$%^()<>?/\|}{~:]')
    if(regex.search(string)==None):
        print("string accepted")
    else:
        print("string not accepted")

string =str(input("enter the string: "))
check(string)