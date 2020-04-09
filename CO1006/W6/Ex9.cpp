#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Input two integers: "; cin >> a >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	if (b != 0) { cout << a << " / " << b << " = " << a / b << " r " << a % b; }
	else { cout << "Cannot be divided"; }
	return 0;
}