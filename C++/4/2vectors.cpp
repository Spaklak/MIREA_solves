#include <vector>
#include <iostream>

using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    vector<int> arr;
    if (x > 9){
        if (n == 1){
            cout << x;
            return 0;
        } else if (x < 100) {
            arr.push_back(x/10);
            arr.push_back(x%10);
            n++;
        } else {
            arr.push_back(1);
            arr.push_back(0);
            arr.push_back(0);
            n++;
        }
    } else {
        arr.push_back(1);
        arr.push_back(x);
        if (n == 1){
            cout << x;
            return 0;
        } else if (n == 2){
            cout << 1 << x;
            return 0;
        }
    }
    for (int times = 0; times < n - 2; times++){
        vector<int> time_list;
        int control = -1;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] == control){
                continue;
            }
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++){
                if (arr[j] == arr[i]){
                    control = arr[i];
                    count++;
                } else {
                    break;
                }
            }
            time_list.push_back(count);
            time_list.push_back(arr[i]);
        }
        arr = time_list;
    }
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
    return 0;
}