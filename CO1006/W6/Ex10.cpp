#include <iostream>

using namespace std;

int main() {
	int a;
	cout << "Input a number: "; cin >> a;

	string check[] = { "even", "odd" };

	cout << a << " is " << check[(a % 2)];
	return 0;
}