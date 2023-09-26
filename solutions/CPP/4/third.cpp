#include <string>
#include <iostream>
#include <bitset>
#include <fstream>
using namespace std;

string Change(const string& text) {
    string result, currentNumber;
    
    for (char c : text) {
        if (isdigit(c)) {
            currentNumber += c;
        }
        else {
            if (!currentNumber.empty()) {
                int number = stoi(currentNumber);
                string temp = bitset<32>(number).to_string();

                int firstNonZero = temp.find_first_not_of('0');
                if (firstNonZero != std::string::npos) {
                    temp = temp.substr(firstNonZero);
                }
                result += temp;
                currentNumber = "";
            }
            result += c;
        }
    }

    if (!currentNumber.empty()) {
        int number = stoi(currentNumber);
        string temp = bitset<32>(number).to_string();

        int firstNonZero = temp.find_first_not_of('0');
        if (firstNonZero != std::string::npos) {
            temp = temp.substr(firstNonZero);
        }
        result += temp;
    }

    return result;
}

int main() {
    std::ifstream inputFile("input.txt"); // Открываем файл для чтения

    if (inputFile.is_open()) { // Проверяем, успешно ли открыт файл
        string text;
        getline(inputFile, text); // Считываем первую строку
        string result = Change(text);
        

        inputFile.close(); // Закрываем файл
    	ofstream out_file("output.txt");
    	out_file << result;
    	out_file.close();
    }
    return 0;
}