# A simple primes calculator
for i in range(2, 1000):
    j = 2
    flag = True
    while j**2<=i:
        if i%j == 0:
            flag = False
            break
        j += 1
    if flag:
        print(i)