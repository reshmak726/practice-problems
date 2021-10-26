def isconsecutive(A):
    if len(A)<=1:
        return True
    minimum=min(A)
    maximum=max(A)

    if maximum-minimum != len(A)-1:
        return False
    
    visited=set()
    for i in A:
        if i in visited:
            return False
        else:
            visited.add(i)
    return True

if __name__=='__main__':
    A=[-1,5,4,2,0,3,1]
    if isconsecutive(A):
        print("the array contains consecutive integers")
    else:
        print("the array does not contain consecutive integers")