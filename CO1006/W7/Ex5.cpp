#include <iostream>

using namespace std;

int main() {
	int gra;
	cout << "Input grade: ";
	cin >> gra;

	if (gra >= 90) cout << "A";
	else if (gra >= 80) cout << "B";
	else if (gra >= 70) cout << "C";
	else if (gra >= 60) cout << "D";
	else cout << "F";

	return 0;
}