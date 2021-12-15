inp=input("enter the elements:")
a=inp.split(" ")
K=int(input("enter the value of K"))

res=[]
for i in a:
    freq=a.count(i)
    if freq > K and i not in res:
        res.append(i)
print("the required elements are: " + str(res))