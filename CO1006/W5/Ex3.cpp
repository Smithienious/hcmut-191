#include <iostream>

using namespace std;

int main() {

	int units = 5;
	float price = 12.5;
	int idnumber = 12583;
	float cost = price * units;
	cout << idnumber << " " << units << " " << price << " " << cost << endl;
	float tax = cost * 0.06;
	float total = cost + tax;
	cout << tax << " " << total << endl;
	return 0;
}