num = int(input())
factorial = 1

if num < 0:
    factorial = 0
else:
    for i in range(1,num + 1):
        factorial = factorial*i

print(factorial)
