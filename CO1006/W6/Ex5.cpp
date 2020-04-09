#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int age, hei, wei;
	string nam = ""; string sex = "";

	cout << "Input name: "; cin >> nam;
	cout << "Input age: "; cin >> age;
	cout << "Input sex (male/female): "; cin >> sex;
	cout << "Input height in cm: "; cin >> hei;
	cout << "Input weight in kg: "; cin >> wei;
	cout << "\n";


	cout << "The name is " << nam;
	cout << "\n" << age << " years old";
	cout << "\nIs a " << sex;
	cout << "\nIs " << hei << " cm high";
	cout << "\nWeighs " << wei << " kg" << endl;

	return 0;
}