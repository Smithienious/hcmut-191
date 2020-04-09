#include <iostream>
#include <string.h>

using namespace std;

const int max = 100;
struct student {
	char name[20];
	long int rollno;
	char sex;
	float height;
	float weight;
};

void main() {
	student cls[max];
	int i, n; float h_avg = 0; float w_avg = 0;
	cout << "How many names?\n";
	cin >> n;
	for (i = 0;i <= n - 1;++i) {
		cout << "Record = " << i + 1 << "\n";
		cout << "Name: "; cin >> cls[i].name;
		cout << "Rollno: "; cin >> cls[i].rollno;
		cout << "Sex: "; cin >> cls[i].sex;
		cout << "Height: "; cin >> cls[i].height;
		cout << "Weight: "; cin >> cls[i].weight;
		cout << "\n";
	}

	cout << "Name\t\t\tRollno\t\tSex\t\tHeight\t\tWeight\n";
	for (i = 0;i < n;++i) {
		cout << cls[i].name << "\t\t" << cls[i].rollno << "\t\t" << cls[i].sex << "\t\t" << cls[i].height << "\t\t" << cls[i].weight << "\n";
	}

	for (i = 0;i < n;++i) {
		w_avg += cls[i].weight / n;
		h_avg += cls[i].height / n;
	}
	cout << w_avg << "\n" << h_avg;
}