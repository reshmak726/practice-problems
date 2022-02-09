with open('prctice3.txt') as f:
    lines=f.readlines()
currencyDict={}
for line in lines:
    parsed=line.split("\t")
    currencyDict[parsed[0]]=parsed[1]

# print(currencyDict)
amount=int(input("enter the amount: \n"))
print("enter the name of curency you want to convert this amount to:? available options:\n")
[print(item) for item in currencyDict.keys()]
currency=input("please enter one of these values:\n")
print(f"{amount} INR is equal to {amount *float(currencyDict[currency])} {currency} ")