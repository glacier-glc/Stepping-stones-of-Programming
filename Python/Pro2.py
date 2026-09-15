def fact(x):
    if x==0:
        return 1
    return x* fact(x-1)
o = int(input("enter number"))
print(fact(o))