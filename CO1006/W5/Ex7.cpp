#include <iostream>

using namespace std;

int main() {
	float fah, cel;
	cout << "Input temperature in Fahrenheit: ";
	cin >> fah;
	cel = 5 * (fah - 32) / 9;
	cout << "Temperature in Celcius: " << cel << endl;
	return 0;
}