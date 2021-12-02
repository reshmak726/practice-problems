listy=['hello','i','amlly','loyal']
print("the original string is" +str(listy))

res = [sub.replace('l','-').replace('f','l').replace('-','f') for sub in listy]

print("list after swapping string is" + str(res))