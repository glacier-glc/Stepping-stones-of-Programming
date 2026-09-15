import math
n = (int(input()))
# if n>=1 and n<=100:
if n%2!=0:
        print("Weird")
if n%2==0:
    if n<=5:
        print("Not Weird")
    if n>5 and n<=20:
        print("Weird")
    if n>20:
        print("Not Weird")
    