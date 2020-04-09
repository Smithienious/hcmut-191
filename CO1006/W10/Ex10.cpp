#include <iostream>

using namespace std;

float factorial(int n)
{
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
	float bef = -10.0; float aft = 0.0; int n = 0;
	while (aft - bef > 1 / 1000000) {
		bef = aft;
		aft += 1 / factorial(n);
		n++;
	}
	cout << aft;
	return 0;
}
