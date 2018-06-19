#include <iostream>
#include <cmath>
#include "../libraries/factorial/factorial.h"

using namespace std;

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