#include <iostream>

using namespace std;

int main(){
    double x,y;
    int count = 0;
    cin >> x >> y;
    while (x < y){
        x = x + (x / 100 * 10);
        count++;
    }
    cout << count+1;
    return 0;
}