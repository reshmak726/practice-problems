

from math import factorial
from pip import main


def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)
def trailingzeroes(n):
    count=0
    i=5
    while(n//i!=0):
        count+=int(n/i)
        i=i*5
        return count


if __name__ == '__main__':
    n=int(input("enter a no "))
    # fact=factorial(n)
    # print(f"factorial is {fact}")
    print(trailingzeroes(n))