#include <stdio.h>

double sin(double x) {

	double res = x;
	double c = x;
	double n = 1;

	do {

		c *= ((-1.0 * x * x) / ((2 * n + 3) * (2 * n + 2)));
		res += c;
		n++;
		c = c < 0 ? -1 * c : c;

	} while (c >= 0.001);

	return res;

}

int main() {

	double answer;

	answer = sin(0.5);

	printf("%lf", answer);

	return 0;
}