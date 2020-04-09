#include <iostream>

using namespace std;

int main() {
	const int ri = 3;const int ci = 3;
	/*cout << "Input rows: "; cin >> ri;
	cout << "Input columns: "; cin >> ci;*/
	int ini[ci+1][ri+1]; int fin[ri+1][ci+1];

	for (int i = 0; i <= ci;i++) {
		for (int j = 0;j <= ri;j++) {
			cout << "Input position " << i + 1 << j + 1 << ": "; cin >> ini[i][j];
		}
	}
	for (int i = 0; i <= ci;i++) {
		for (int j = 0;j <= ri;j++) {
			fin[j][i] = ini[i][j];
		}
	}

	for (int i = 0; i <= ri;i++) {
		for (int j = 0;j <= ri;j++) {
			cout << ini[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i <= ri;i++) {
		for (int j = 0;j <= ri;j++) {
			cout << fin[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}