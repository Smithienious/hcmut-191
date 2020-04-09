#include <iostream>

using namespace std;

int main() {
	float a, b, c, d;
	cout << "a * x^2 + b * x + C\n";
	cout << "Input a: "; cin >> a;
	cout << "Input b: "; cin >> b;
	cout << "Input c: "; cin >> c;

	d = b * b - 4 * a * c;
	if (a == 0) {
		if (b == 0 && c == 0) cout << "Infinite solutions";
		else if (b == 0) cout << "No solution";
		if (b != 0) cout << "One solution";
	}
	else {
		if (d > 0) cout << "Two solutions";
		else if (d == 0) cout << "One solution";
		else cout << "No solution";
	}

	return 0;
}