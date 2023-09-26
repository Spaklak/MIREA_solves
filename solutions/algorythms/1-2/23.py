import random
def binary(arr, n):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        mid_val = arr[mid]
        if mid_val == n:
            return mid
        if mid_val > n:
            high = mid - 1
        else:
            low = mid + 1
    
random_numbers = [random.randrange(-100, 101) for i in range(15)]
if 0 in random_numbers: random_numbers.remove(0)
random_numbers.sort()
print(random_numbers)
for i in random_numbers:
    if i > 0:
        break

index = binary(random_numbers, i)
poz = len(random_numbers) - index
neg = len(random_numbers) - poz
if poz < neg:
    print(f'Neg: {neg}')
else:
    print(f'Poz: {poz}')