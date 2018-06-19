#include <iostream>
#include "../libraries/basicOperations/basicOperations.h"

using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	cout << "Sum: " << x << " + " << y << " = " << Sum(x, y) << endl;
	cin >> x >> y;
	cout << "Difference: " << x << " - " << y << " = " << Difference(x, y) << endl;
	cin >> x >> y;
	cout << "Multiplication: " << x << " * " << y << " = " << Multiplication(x, y) << endl;
	cin >> x >> y;
	cout << "Division: " << x << " / " << y << " = " << Division(x, y) << endl;
}