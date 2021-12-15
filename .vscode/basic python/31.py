a=[[1,3,2],[2,5,4],[76,55,67]]
print("the original list of elements are: " + str(a))
for ele in a:
    ele.sort(reverse=True)
print("the reverse sorted elements are: " + str(a))
