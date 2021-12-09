l=["resh",2,"is",5,"best",10,"for",17,"home",33]
print("the original list is",str(l))
kl=["name","number"]
n=len(l)
r=[]
for id in range(0,n,2):
    r.append({kl[0]:l[id],kl[1]:l[id+1]})

print("the constructed dict is: " + str(r))

