#include <iostream>
#include <cstring>
using namespace std;

int maincount = 0;

void replaceArray(int*& arr, const int* newValues, int n){
    memcpy(arr, newValues, n * sizeof(int));
}
// size считать через second - first
void newArray(int* oldArr, int first, int second, int size){
    int *newArr;
    newArr = new int[size]; 
    for (int i = 0; i < first; i++){
        newArr[i] = oldArr[i];
    }
    for (int i = first; i < size; i++){
        newArr[i] = oldArr[second];
        second++;
    }
    replaceArray(oldArr, newArr, size);
    delete[] newArr;
}
int check(int* arr, int n){
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int x = i; x < n; x++){
            int flag = 0;
            if (arr[i] == arr[x]){
                flag = 1;
                count++;
                if (x == n - 1){
                    flag = 0;
                }
            } else if (count > 1){
                flag = 1;
                maincount += count;
                newArray(arr, i, x, n - (x-i));
                return n - (x-i);
            } else {
                flag = 1;
                break;
            }
            if ((count > 1) && (flag == 0)){
                maincount += count;
                newArray(arr, i, x, n - (x-i));
                return n - (x-i);
            }
        }
    }
    return 0;
}

int main(){
    int *arr;
    int n;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++){ // ввод значений
        cin >> arr[i];
    }
    while (true){
        if (n >= 2){
            n = check(arr, n);
            if (n == 0){
                break;
            }
        } else {
            break;
        }
    }
    cout << maincount;
    delete[] arr;
    return 0;
}