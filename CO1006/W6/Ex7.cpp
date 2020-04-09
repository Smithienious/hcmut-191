#include <iostream>

using namespace std;

int main() {
	float a, b, x, y;
	cout << "Input coordinates of A: "; cin >> a >> b;
	cout << "Input coordinates of B: "; cin >> x >> y;

	cout << "Distance between A and B is " << sqrt((a - x) * (a - x) + (b - y) * (b - y));
	return 0;
}