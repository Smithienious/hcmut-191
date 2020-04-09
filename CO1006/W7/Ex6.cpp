#include <iostream>

using namespace std;

int main() {
	char marrCode; int marrNum;
	cout << "Input marriage code: ";
	cin >> marrCode;

	switch (marrCode) {
	case 'M':
	case 'm':
		cout << "Individual is married";
		break;
	case 'D':
	case 'd':
		cout << "Individual is divorced";
		break;
	case 'W':
	case 'w':
		cout << "Individual is widowed";
		break;
	default:
		cout << "An invalid code was entered";
		break;
	}

	return 0;
}