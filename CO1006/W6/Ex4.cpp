#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float a;
	cout << "Input a number: "; cin >> a;

	a = sqrt(a);
	cout << fixed << setprecision(4) << a;

	return 0;
}