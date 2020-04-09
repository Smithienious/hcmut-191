#include <iostream>

using namespace std;

int main() {
	int a, b, swap;
	cout << "Input two integers: "; cin >> a >> b;

	swap = a; a = b; b = swap;

	cout << a << "\n" << b;
	return 0;
}