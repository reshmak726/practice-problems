def Remove(tuples):
    tuples=[t for t in tuples if t]
    return tuples

tuples=[(),('ram','12','5'),(),((),'ram'),()]

print (Remove(tuples))