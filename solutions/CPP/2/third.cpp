#include <iostream>

int main()
{
    int a;
    int count = 0;
    int numbers[100];
    std::cin >> a;
    for(int i = 0; i < a; i++) {
        int user_input;
        std::cin >> user_input;
        numbers[i] = user_input;
    }
    for (int i = 1; i < a; i++) {
        if ((i == (a - 1))&&(numbers[i - 1] < numbers[i])) {
            count++;
        }
        else if (numbers[i - 1] < numbers[i] && numbers[i] > numbers[i + 1]) {
            count++;
        }
        
    }
    std::cout << count;
    return 0;
}