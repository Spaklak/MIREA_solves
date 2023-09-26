#include <iostream>

int main()
{
    long int a;
    long int b;
    std::cin >> a >> b;
    
    while (a > b) {
        if (a % 2 == 0 && a / 2 >= b) {
            a = a / 2;
            std::cout << ":2" << '\n';
        }
        else if  (a - 1 >= b) { 
            a -= 1;
            std::cout <<  "-1" << '\n';
        }
        else { break; }
    }
    return 0;
}