#include <iostream>

using namespace std;

int main() {
	int F0 = 0; int F1 = 1; int F2 = 1; int n = 1;
	cout << "Input the nth number: "; cin >> n;
	if (n == 0) { cout << "0"; }
	else if (n == 1) { cout << "1"; }
	else {
		for (int i = 1;i < n;i++) {
			F2 = F1 + F0;
			F0 = F1;
			F1 = F2;
		}
		cout << F2;
	}
	return 0;
}