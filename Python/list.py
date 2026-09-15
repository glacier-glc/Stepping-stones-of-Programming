l1 = []
def gen(x,y,z,n):
        for i in range(0, x+1):
            a=i
            return a
            i+1
        for i in range(0, y+1):
            b=i
            i+1
            return b
        for i in range(0, z+1):
            c=i
            i+1
            return c


        l1.append((a,b,c))
        
        return l1


a = int(input("Enter x value"))
b = int(input("Enter y value"))
c = int(input("Enter z value"))
n = int(input("Enter a limiting value"))
gen(a,b,c,n)

l1.append((a,b,c))  
print(l1)
