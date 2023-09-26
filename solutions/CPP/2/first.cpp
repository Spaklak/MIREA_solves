#include <iostream>
using namespace std;
int main()
{
    float x;
    long int y;
    int count = 0;
    cin >> x >> y;
    while (x < y) {
        x += x * 0.1;
        count += 1;
        
    }
    cout << count + 1;
    return 0;
}
