#ifndef EUCLIDEANALGORITHM_H
#define EUCLIDEANALGORITHM_H

int Gcd (int a, int b) { // GreatestCommonDivisor
	int c;
	c = a % b;
	if (c == 0) {
		return b;
	} else {
		Gcd(b, c);
	}
}

#endif // EUCLIDEANALGORITHM_H