#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string first, second;
    cin >> first >> second;
    if (second.length() > first.length()){
        cout << "no";
        return 0;
    } else {
        for (int i = 0; i < first.length(); i++){
            string temp;
            temp += first[i];
            for (int j = i + 1; j < first.length(); j++){
                if (temp.length() < second.length()){
                    temp += first[j];
                } else {
                    break;
                }
            }
            if (temp == second){
                cout << "yes";
                return 0;
            }
        }
        cout << "no";
        return 0;
    }
}