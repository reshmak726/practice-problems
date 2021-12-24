def removeduplicate(str):
    s=set(str)
    s="".join(s)
    print("without order: ",s)
    t=""
    for i in str:
        if (i in t):
            pass
        else:
            t=t+i
        print("with order: ",t)
        
str=str(input("enter the string: "))
removeduplicate(str)