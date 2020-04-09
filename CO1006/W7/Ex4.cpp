#include <iostream>

using namespace std;

int main() {
	int mon;
	cout << "Input month in number: ";
	cin >> mon;

	if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12) cout << "31";
	else if (mon == 2) cout << "28 or 29";
	else cout << "30";

	return 0;
}