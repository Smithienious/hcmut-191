#include <iostream>

using namespace std;

int main() {
	const int n = 10;
	/* cout << "Input the nth number: "; cin >> n; */ //Array size must be constant
	int F[n];
	F[0] = 0;F[1] = 1;
		for (int i = 0;i < n;i++) {
			if (i == 0) { cout << F[0] << " "; }
			else if (i == 1) { cout << F[1] << " "; }
			else {
				F[i] = F[i-1] + F[i-2];
				cout << F[i] << " ";
			}
		}
	return 0;
}