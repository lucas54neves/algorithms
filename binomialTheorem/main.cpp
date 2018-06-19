#include <iostream>
#include <cmath>

using namespace std;

int calculatesFactorial(int n) {
	if (n == 0 or n == 1) {
		return 1;
	} else {
		int value = 1;
		for (int i = 1; i <= n; ++i) {
			value = value * i;
		}
		return value;
	}
}

int calculatesCoefficient(int n, int k) {
	return (calculatesFactorial(n) / (calculatesFactorial(k) * calculatesFactorial(n - k)));
}

void calculatesTheorem(int n) {
	for (int k = 0; k <= n; ++k) {
		cout << calculatesCoefficient(n, k) << "*x^("  << (n - k) << ")*y^" << k;
		if (k < n) {
			cout << " + ";
		} else {
			cout << endl;
		}
	}
}

int main() {
	for (int i = 0; i < 5; ++i) {
		calculatesTheorem(i);
	}
	return 0;
}