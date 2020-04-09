#include <iostream>

using namespace std;

int main() {
	const int N = 10; float max;
	//cout << "Input quantity: "; cin >> N;
	float a[N]; //Array size must be constant

	for (int i = 0; i < N; i++) {
		cout << "Input number " << i + 1 << ": ";
		cin >> a[i];
	}
	max = a[0];
	for (int i = 1; i < N; i++) {
		if (a[i] > max) { max = a[i]; }
	}
	cout << "Largest number is " << max;
	return 0;
}