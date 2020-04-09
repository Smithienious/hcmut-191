#include <iostream>

using namespace std;

int main() {
	const int N = 10; float avg = 0;
	//cout << "Input quantity: "; cin >> N;
	float a[N];

	for (int i = 0; i < N; i++) {
		cout << "Input number " << i + 1 << ": ";
		cin >> a[i];
		avg += a[i] / 10;
	}
	cout << "Average number is " << avg;
	return 0;
}