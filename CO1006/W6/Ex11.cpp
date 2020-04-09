#include <iostream>

using namespace std;

int main() {
	float a = 0; int b = 0;
	cout << "Input 5 integers: ";

	for (int i = 1; i <= 5;i++) {
		cin >> b;
		a = a + b / 5;
	}

	cout << "Average is " << a;
	return 0;
}