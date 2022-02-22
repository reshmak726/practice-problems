



SECURE=(('s','$'),('and','&'),('a','@'),('o','0'),('i','1'))
def securepass(password):
    for a,b in SECURE:
        password=password.replace(a,b)
        return password

if __name__=='__main__':
    password=input("enter your password ")
    password=securepass(password)
    print(f"your secure pasword is {password}")

