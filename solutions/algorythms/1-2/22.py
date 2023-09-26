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
    
def checkPick(arr):
    for i in range(len(arr)):
        flag = 1
        for x in range(0, i):
            if not(arr[x] < arr[i]):
                flag = 0
        if flag:
            for x in range(i+1, len(arr)):
                if not(arr[i] > arr[x]):
                    flag = 0
        if flag:
            if (i == 0) or (i == len(arr) - 1):
                return 0
            return arr[i]
    return 0

test = [1,1,1,1,12,1,1,1,1,1]

solve = checkPick(test)

if solve:
    print(f'{binary(test, solve)}')
else:
    print('Не горный')