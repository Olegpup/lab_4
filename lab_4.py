from math import factorial
x = float(input("Enter x: "))
m = int(input("Enter n: "))
result = 0
for n in range(1, m + 1):
    a = (x**(n - 1)) / factorial(n - 1)
    result += a
print("Result:", result)

