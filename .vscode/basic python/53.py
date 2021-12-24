def string_k(k,str):
    string=[]
    t=str.split(" ")
    for i in t:
        if len(i)>k:
            string.append(i)
    return string

k=int(input("enter the value of k: "))
string=str(input("enter the string: "))
# k=3
# string="rehsma is a good grl"
print(string_k(k,string))