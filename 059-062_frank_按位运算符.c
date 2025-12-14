#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <float.h>
int main() {
	int numOne = 15;
	int numTwo = 25;

	printf("The result of &: %" PRId32 "\n", numOne & numTwo);

	printf("The result of ^: %" PRId32 "\n", numOne ^ numTwo);

	return 0;
}