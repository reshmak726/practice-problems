from collections import Counter
# l1=["reeeshma is a good girl"]
# l2=['r','e','s']
l1=str(input("enter string"))
l2=str(input("enter specific char"))
r={key:val for key,val in dict(Counter("".join(l1))).items() if key in l2}

print("specific:" +str(r))