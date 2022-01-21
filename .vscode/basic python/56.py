def uncommon(a,b):
    count={}
    for word in a.split():
        count[word]=count.get(word,0)+1
    for word in b.split():
        count[word]=count.get(word,0)+1
    return [word for word in count if count[word]==1]

a=str(input('enter the string: '))
b=str(input("enter the second string: "))
print(uncommon(a,b))

