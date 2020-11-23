f = 1
result = 0
x = int(input("Enter x: "))
n = int(input("Enter n: "))
for i in range(0, n):
    if i != 0 and i != 1:
        m = i
        f = 1
        while m > 0:
            f *= m
            m -= 1
    else:
        f = 1
    result += x ** (i - 1) / f
    f = 0
print("Result:", result)
