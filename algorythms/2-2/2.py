def find_smallest_number(a):
    if a < 10: 
        return a if a != 0 else 10

    factors = []
    for divisor in [2, 3, 5, 7]:
        while a % divisor == 0:
            a /= divisor
            factors.append(divisor)

    if a > 1:
        return -1

    result = []
    
    while factors.count(3) >= 2:
        result.append(9)
        factors.remove(3)
        factors.remove(3)
    
    while factors.count(2) >= 3:
        result.append(8)
        factors.remove(2)
        factors.remove(2)
        factors.remove(2)
    
    while 3 in factors and 2 in factors:
        result.append(6)
        factors.remove(3)
        factors.remove(2)
    
    while factors.count(2) >= 2:
        result.append(4)
        factors.remove(2)
        factors.remove(2)

    result += factors
    
    result.sort()

    return int(''.join(map(str, result)))

a = int(input())
l = find_smallest_number(a)
if (l == -1):
    print(0)
elif (a == 0):
    print(0)
else:
    print(l)
