def findtriplet(A):
    A.sort()
    n=len(A)
    if n<=2:
        print("no triplet exist")
    if A[n-1]*A[n-2]*A[n-3]>A[0]*A[1]*A[n-1]:
        print("triplets are ",A[n-1],A[n-2],A[n-3])
    else:
        print("triplets are",A[0],A[1],A[n-1])

if __name__ == '__main__':
    A=[-4,1,-8,9,6]
    findtriplet(A)