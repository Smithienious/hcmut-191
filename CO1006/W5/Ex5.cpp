#include <iostream>

using namespace std;

int main() {
	bool b_var = true;
	char c_var = 75;
	short s_var = 5;
	int i_var = 10;
	long l_var = 10000;
	long long ll_var = 1000000000;
	float f_var = 3.14;
	double d_var = 3.14159;
	long double ld_var = 3.1415926535;

	cout << "Size of b_var is " << sizeof(b_var) << endl;
	cout << "Size of c_var is " << sizeof(c_var) << endl;
	cout << "Size of s_var is " << sizeof(s_var) << endl;
	cout << "Size of i_var is " << sizeof(i_var) << endl;
	cout << "Size of l_var is " << sizeof(l_var) << endl;
	cout << "Size of ll_var is " << sizeof(ll_var) << endl;
	cout << "Size of f_var is " << sizeof(f_var) << endl;
	cout << "Size of d_var is " << sizeof(d_var) << endl;
	cout << "Size of ld_var is " << sizeof(ld_var) << endl;

	return 0;
}