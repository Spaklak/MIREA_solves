#include <string>
#include <iostream>
using namespace std;
int main()
{
	string x, y;
	cin >> x >> y;
	if (x.length() > y.length()) {


		int flag = 0;
		for (int i = 0; i < x.length() - y.length(); i++) {
			string temp = x.substr(i, y.length());
			if (temp == y) {
				flag = 1;
				break;
			}
			else { continue; }

		}
		if (flag == 1) {
			cout << "yes";
		}
		else {
			cout << "no";
		}
	}
	else {
		cout << "no";
	}
}