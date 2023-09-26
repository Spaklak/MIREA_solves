#include <iostream>
using namespace std;
int main() {
    float a;
    float b;
    char c;
    cin >> a >> c >> b;
    if (c == '+') {
        cout << a + b;
    }
    else if (c == '-') {
        cout << a - b;
    }
    else if (c == '/') {
        cout << a / b;
    }
    else {
        cout << a * b;
    }
    return 0;
}