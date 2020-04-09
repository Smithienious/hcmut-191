#include <iostream>

using namespace std;

int main() {
	int ang;
	cout << "Input an angle in degrees: ";
	cin >> ang;

	ang = ang % 360;

	if (ang < 90) cout << "First quadrant";
	else if (ang < 180) cout << "Second quadrant";
	else if (ang < 270) cout << "Third quadrant";
	else cout << "Forth quadrant";

	return 0;
}