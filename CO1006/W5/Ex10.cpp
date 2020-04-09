#include <iostream>

using namespace std;

int main() {
	int yr, wk, day;
	cout << "Input days: ";
	cin >> day;

	yr = day / 365; day = day % 365;
	wk = day / 7; day = day % 7;

	if (yr == 1) {
		cout << "1 year ";
	}
	else if (yr > 1) {
		cout << yr << " years ";
	}
	if (wk == 1) {
		cout << "1 week ";
	}
	else if (wk > 1) {
		cout << wk << " weeks ";
	}
	if (day == 1) {
		cout << "1 day";
	}
	else if (day > 1) {
		cout << day << " days";
	}
	return 0;
}