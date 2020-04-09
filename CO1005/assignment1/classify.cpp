// explain the meaning of the pre-written code used, explain where in the program students will write their code

// include section and declare library used
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// declare and read the input
	ifstream fin("input.txt");
	float T, // Math score
		L, // Physics score
		H; // Chemistry score

	fin >> T >> L >> H;
	// the main body, where students add, adjust the code to complete the program
	float tong_diem = T + L + H;
	// Excellent ranking
	if (tong_diem >= 8 * 3 && T >= 6.5 && L >= 6.5 && H >= 6.5) //Average is no less than 8, no subject is less than 6.5
		cout << "Excellent" << endl;

	// Good ranking
	else if (tong_diem >= 6.5 * 3 && T >= 5 && L >= 5 && H >= 5) //Not excellent, average is no less than 6.5, no subject is less than 5
		cout << "Good" << endl;

	// Fair ranking
	else if (tong_diem >= 5 * 3 && T >= 2 && L >= 2 && H >= 2) //Not good, average is no less than 5, no subject is less than 2
		cout << "Average" << endl;
	// Weak ranking
	else
		cout << "Weak" << endl;
	return 0;
}