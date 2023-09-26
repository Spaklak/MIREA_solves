#include <iostream>

using namespace std;

int main(){
    double a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+'){
        cout << a + b;
    }
    if (c == '-'){
        cout << a - b;
    }
    if (c == '*'){
        cout << a * b;
    }
    if (c == '/'){
        cout << a / b;
    }
    return 0;
}