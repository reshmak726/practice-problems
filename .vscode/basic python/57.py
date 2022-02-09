from word2number import w2n
t=str(input("enter string"))
print("the original string is: " + t)
r=w2n.word_to_num(t)
print("the string after performing replace: " + str(r))