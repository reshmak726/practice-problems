import sys
def findpar(A):
    if len(A)<2:
        return
    (low,high)=(0,len(A)-1)
    min=sys.maxsize
    i=j=0
    while low<high:
        if abs(A[high]+A[low])<min:
            min=abs(A[high]+A[low])
            (i,j)=(low,high)
        if min==0:
            break
        if A[high]+A[low]<0:
            low=low+1
        else:
            high=high-1
    print("pair found",(A[i],A[j]))

if __name__=='__main__':
    A=[-6,-5,-3,0,2,4,9]
    findpar(A)