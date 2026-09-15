x = int(input("enter the star max star formation"))
y = " "
print(y*(x-1), "*")
for i in range(1, x):
    z = 2
    
    print(y*(x-z), "*", y*(i-1), "*")
    z=+1
    i+=1
for i in range(x, 1):
    print("*", y*(i-2), "*")
    i=-1
print(y*(x-1), "*")
    

