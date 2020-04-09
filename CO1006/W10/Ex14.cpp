#include <iostream>

using namespace std;

int main() {
	string string1 = ""; string string2 = ""; string string3 = ""; string tmp = "";
	cout << "Input string 1: "; cin >> string1;
	cout << "Input string 2: "; cin >> string2;
	cout << "Input string 3: "; cin >> string3;

	char* str1 = new char[string1.length() + 1];
	strcpy(str1, string1.c_str());
	char* str2 = new char[string2.length() + 1];
	strcpy(str2, string2.c_str());
	char* str3 = new char[string3.length() + 1];
	strcpy(str3, string3.c_str());

	if (strcmp(str1, str2) < 0) { tmp = string1; string1 = string2; string2 = tmp; }
	if (strcmp(str2, str3) < 0) { tmp = string2; string2 = string3; string3 = tmp; }

	cout << string1 << "\t" << string2 << "\t" << string3;
	return 0;
}