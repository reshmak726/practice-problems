def findminindex(A):
    minindex=len(A)
    s=set()
    for i in reversed(range(len(A))):
        if A[i] in s:
            minindex=i
        else:
            s.add(A[i])
    if minindex==len(A):
        return -1
    else:
        return minindex

if __name__=='__main__':
    A=[5,2,3,4,3,6,4]
    minindex=findminindex(A)
    if minindex!=len(A):
        print("minimum index of element is",minindex)
    else:
        print("invalid input")