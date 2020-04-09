#include <iostream>

using namespace std;

int main() {
	float bef = -10; float aft = 1; int n = 1;
	while (abs(4*(aft - bef)) > 1/1000000) {
		bef = aft;
		aft += pow(-1,n)/(2 * n + 1);
		n++;
	}
	cout << 4 * aft;
	return 0;
}
