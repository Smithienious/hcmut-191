#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const float pi = 3.14; float i;
	cout << "sin(x)\tcos(x)\ttan(x)\n";
	for (float x = 5.0; x <= 85.0;x += 5.0) {
		i = x / 180.0 * 3.14;
		cout << setprecision(3) << sin(i) << "\t" << cos(i) << "\t" << tan(i) << "\n";
	}
	return 0;
}
