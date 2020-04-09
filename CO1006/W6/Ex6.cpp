#include <iostream>

using namespace std;

int main() {
	char a;
	cout << "Input a letter: "; cin >> a; cout << endl;
	a = tolower(a);

	cout << "CHARACTER" << "\tDECIMAL" << "\t\tHEXADECIMAL" << "\tOCTAL" << endl;
	cout << a;
	cout << "\t\t" << (int)a - 96;
	cout << "\t\t" << hex << (int)a;
	cout << "\t\t" << oct << (int)a;
	return 0;
}