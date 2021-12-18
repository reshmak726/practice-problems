def rev(sent):
    words=sent.split(' ')

    rev_sent=' '.join(reversed(words))
    return rev_sent

n=str(input("enter the sentence"))
print(rev(n))
