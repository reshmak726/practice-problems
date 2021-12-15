from itertools import chain
import random
l=[[4,6,5],[1,3,2],[0,78,67]]
print("the original list is: " + str(l))
res=random.choice(list(chain.from_iterable(l)))
print("Random number from matrix: " + str(res))