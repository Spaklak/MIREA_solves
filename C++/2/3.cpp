#include <iostream>

using namespace std;

int main(){
    int arr[100];
    int n, count;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[i] = x;
    }
    for (int i = 1; i < n; i++){
        if (i == n-1){
            if (arr[i] > arr[i-1]){
                count++;
                break;
            }
        }
        if ((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
            count++;
        }
    }
    cout << count;
    return 0;
}