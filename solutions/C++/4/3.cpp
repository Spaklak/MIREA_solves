#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
using namespace std;

string toBinary(int n) {
    string result;
    if (n == 0) return "0";
    while (n) {
        result.insert(result.begin(), '0' + (n & 1));
        n >>= 1;
    }
    return result;
}

int checked(char test){
    return (test == '0' || test == '1' || test == '2' || test == '3' || test == '4' || test == '5' || test == '6' || test == '7' || test == '8' || test == '9');
}

int main() {
    ifstream file("input.txt");

    string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    string numbers;
    string solve;
    for (int i = 0; i < content.length(); i++){
        char test = content[i];
        if (checked(test)){
            numbers += test;
        } else {
            if (numbers.length() != 0){
                solve += toBinary(stoi(numbers)) + test;
                numbers = "";
            } else {
                solve += test;
            }
        }
    }
    if (numbers.length() != 0){
        solve += toBinary(stoi(numbers));
    }
    ofstream out_file("output.txt");
    out_file << solve;
    out_file.close();
    file.close();
    return 0;
}
