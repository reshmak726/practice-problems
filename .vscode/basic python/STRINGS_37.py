def palindrome(a):
    mid=(len(a)-1)//2
    start=0
    end=len(a)-1
    flag=0

    while(start<=mid):
        if (a[start]==a[end]):
            start+=1
            end-=1

        else:
            flag=1
            break;
    if flag==0:
        print("it is palindrome");
    else:
        print("it is not a palindrome")

def symmetrical(a):
    n=len(a)
    flag=0

    if n%2:
        mid=n//2+1
    else:
        mid=n//2
    start1 =0
    start2 = mid
    while(start1 <mid and start2<n):
        if(a[start1]==a[start2]):
            start1=start1+1
            start2=start2+1
        else:
            flag=1
            break

    if flag==0:
        print("it is symmetrical")
    else:
        print("it is not symmetrical")

# b=input("enter string")
# string ='amaama'
# string = raw_input("enter string: ")
string=str(input("enter the string"))
palindrome(string)
symmetrical(string)
        


