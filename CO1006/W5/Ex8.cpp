#include <iostream>
#include <math.h>

using namespace std;

int main() {
	/*int P = 10000;
	float R = 0.07;
	int N = 4;
	float amount = P * pow((1 + N), R);
	cout << "Amount of money: " << amount << endl;*/

	cout << 10000 * pow(1.007, 4);
	return 0;
}