#include <iostream>

using namespace std;

int main() {
	/*float a1, b1, a2, b2;
	cout << "Input a1, b1: "; cin >> a1 >> b1;
	cout << "Input a2, b2: "; cin >> a2 >> b2;*/

	int a1 = 1; int a2 = 3; int b1 = 0; int b2 = -4;

	float x = (b2 - b1) / (a1 - a2);
	float y = a1 * x + b1;

	cout << "x = " << x << "; y = " << y;
	return 0;
}