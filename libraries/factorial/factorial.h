#ifndef FACTORIAL_H
#define FACTORIAL_H

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

#endif // FACTORIAL_H