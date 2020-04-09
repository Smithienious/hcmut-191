#include <iostream>

using namespace std;

int main() {
	float x, n, r;
	r = 1;
	cout << "Input number x: "; cin >> x;
	cout << "Input power n: "; cin >> n;

	if (x == 0 && n <= 0) { cout << "Error"; }
	else {
		if (x == 0) { r = 0; }
		else if (n == 0) { r = 1; }
		else if (n == 1) { r = x; }
		else
		{
			for (int i = 1;i <= abs(n);i++) {
				r *= x;
			}
		}

		if (n < 0) { cout << x << " ^ " << n << " = 1/" << r; }
		else { cout << x << " ^ " << n << " = " << r; }
	}
	return 0;
}