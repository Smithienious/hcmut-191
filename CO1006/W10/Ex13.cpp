#include <iostream>

using namespace std;

int main() {
	float hourly_rates[] = { 9.5,6.4,12.5,5.5,10.5 }; float working_hours[5]; float wages[5];
	for (int i = 0;i < 5;i++) {
		cout << "Input working hours " << i + 1 <<": "; cin >> working_hours[i];
	}
	cout << "\nHourly rate\tWorking hours\tWage\n";
	for (int i = 0;i < 5;i++) {
		cout << hourly_rates[i] << "\t\t" << working_hours[i] << "\t\t" << hourly_rates[i] * working_hours[i] << "\n";
	}
	return 0;
}