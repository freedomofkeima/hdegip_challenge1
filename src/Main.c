/**
 * Main.c
 * Main class for calculate a sum of squares of some integers
 *
 * @author freedomofkeima (Iskandar Setiadi)
 * Version 1.0.0 (January 8, 2014)
 *
 */

#include <stdio.h>

/** Recursive function for read each integers */
long long readIntegers(int X) {
	/** Local variable declaration */
	long long input;

	if (X <= 0) return 0; // all integers have been processed
	else { // recursive
		scanf("%lld", &input);
		
		if (input < 0) return readIntegers(X - 1); // ignore negative integers
		else return (input * input) + readIntegers(X - 1);
	}
}

/** Procedure for read each test cases from standard input */
void readTestCase(int N) {
	/** Local variable declaration */
	int X; // number of integers, assumed that X is a positive integer
	long long sum = 0;

	scanf("%d", &X);

	sum = readIntegers(X); // Assumption : sum is fitted in "long long" size

	printf("%lld\n", sum);

	if (N > 1) readTestCase(N-1); // read next test case
}

int main(int argc, char *argv[]) {
	/** Variable declaration */
	int N; // number of testcases

	scanf("%d", &N);

	readTestCase(N);

	return 0;
}
