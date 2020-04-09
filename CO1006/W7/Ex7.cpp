#include <iostream>

using namespace std;

int main() {
	int opt, tem; bool loop = true;

	while (loop) {
	cout << "Select an option\n1: Convert Fahrenheit to Celcius\n2: Convert Celcius to Fahrenheit\n3: Quit\n";
	cin >> opt;

		switch (opt) {
		case 1:
			cout << "Input temperature in Fahrenheit: ";
			cin >> tem;
			cout << 5 * (tem - 32) / 9 << endl;
			break;
		case 2:
			cout << "Input temperature in Celcius: ";
			cin >> tem;
			cout << 9 * tem / 5 + 32 << endl;
			break;
		case 3:
			loop = false;
			break;
		}
	}

	return 0;
}