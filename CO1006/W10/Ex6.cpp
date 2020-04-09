#include <iostream>

using namespace std;

int main() {
	const int N = 10; int p = 0; int n = 0;
	//cout << "Input quantity: "; cin >> N;
	float a[N]; //Array size must be constant

	for (int i = 0; i < N; i++) {
		cout << "Input number " << i + 1 << ": ";
		cin >> a[i];
	}

	for (int i = 0;i < N;i++) {
		if (a[i] > 0) { p++; }
		if (a[i] < 0) { n++; }
	}
	if (p == 0) { cout << "No positive numbers"; }
	else if (p == 1) { cout << "1 positive number"; }
	else { cout << p << " positive numbers\n"; }
	if (n == 0) { cout << "No negative numbers"; }
	else if (n == 1) { cout << "1 negative number"; }
	else { cout << n << " negative numbers"; }
	return 0;
}