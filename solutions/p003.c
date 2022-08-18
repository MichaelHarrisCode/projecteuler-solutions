/**
 * Largest prime factor
 * 
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * 
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>
#include <math.h>

int main()
{
	long int value = 600851475143;

	for (int i = 3; i <= sqrt(value); i += 2) {
		while (value % i == 0) {
			printf("%d ", i);
			value /= i;
		}
	}

	if (value > 2)
		printf("%ld ", value);

	return 0;
}