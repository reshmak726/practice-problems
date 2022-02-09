
sum=0
while(True):
    userinput=(input("enter the price or press q to quit:\n"))
    if(userinput!='q'):
        sum=sum+int(userinput)
        print(f"order total so far {sum}")
    else:
        print(f"your bill total is {sum}.Thanks for shopping.")
        break


  
