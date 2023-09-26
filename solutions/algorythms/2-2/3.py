n = int(input())
count = 5
flag = 0
if (n < 6):
    print(n)
else:
    flag = 1
    while count != n:
        for a in range(6,1690*100):
            solve = a
            for divisor in [2, 3, 5]:
                while a % divisor == 0:
                    a /= divisor
            if (a > 1):
                continue;
            else:
                count += 1
                if (count == n):
                    break

if flag == 1:
    print(solve)

'''
1 2 3 4 5 6 8 9 10 12
'''