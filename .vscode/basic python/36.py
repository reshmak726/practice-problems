# arr=[1,1,1,45,56,33,33,33]
x=list(map(int,input("elemenets of array: ").strip().split()))
size = len(x)
for i in range(size-2):
    if x[i]==x[i+1] and x[i+1]==x[i+2]:
        print(x[i])
a=(input("enter the elements of array: "))

# print(n)