no = int(input("Enter Number"))
for i in range(1, no+1):
    if i%15==0:
        print("FizzBuzz")
        i+1
    if i%3==0:
        print("Fizz")
        i+1
    elif i%5==0:
        print("Buzz")
        i+1
    else:
        print(i)
