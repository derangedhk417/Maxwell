// Author: Adam J. Robinson
// Description: Contains code for performing Simpson numeric integration
// on a function, given a set of equidistant points where the integrand
// has been evaluated. Also provides a helper function for generating
// these points.

#include <iostream> 
#include <mathimf.h>

using namespace std;

// n must be odd and greater than or equal to 3.
float simpsonIntegrate(float * evals, int n, float a, float b) {
	float sum = 0.0;
	int steps = int(floorf(n / 2.0));
	float div = (b - a) / (n - 1);

	for (int i = 0; i < steps; ++i) {
		float ai = a + 2*i*div;
		float mi = ai + div;
		float bi = mi + div;

		cout << ai << " " << mi << " " << bi << endl;
		sum += ((bi - ai) / 6)*(evals[2*i] + 4*evals[2*i + 1] + evals[2*i + 2]);
	}

	return sum;
}

// Generates n equidistant points from a to b inclusive.
// It is the responsibility of the caller to free the array.
float * linspace(float a, float b, int n) {
	float * res = new float[n];

	for (int i = 0; i < n; ++i) {
		float current = a + ((b - a) / (n - 1)) * i;
		res[i] = current;
	}

	return res;
}