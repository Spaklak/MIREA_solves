def binary(arr, n):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        midVal = arr[mid]
        if midVal == n:
            return mid
        if midVal > n:
            high = mid - 1
        else:
            low = mid + 1
    
    return None

def checker(arr, result, n):
    if result:
        print(f'Вставка не потребовалась. Элемент {n} имеет индекс: {result}')
    else:
        arr_ins = []
        flag = 0
        for i in arr:
            if i < n:
                arr_ins.append(i)
            elif (flag == 0):
                arr_ins.append(n)
                arr_ins.append(i)
                flag += 1
            else:
                arr_ins.append(i)
        if (flag == 0):
            arr_ins.append(n)
        print(f'Вставка выполнена успешно. Элемент {n} был вставлен в массив: {arr}\nИтог: {arr_ins}')
        return arr



if __name__ == "__main__":
    arr = [0,2,4,6,8,10,12,14]
    n = -1
    result = binary(arr=arr, n=n)
    checker(arr=arr, result=result, n=n)

    