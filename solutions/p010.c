/**
 * Summation of primes
 * 
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * 
 * Find the sum of all the primes below two million.
 */

#include <stdio.h>

int main()
{
	long count = 2;

	for (int i = 3; i < 2000000; i += 2) {
		printf("i = %d\n", i);
		for (int j = 3; j <= i; j += 2) {
			if (i == j) {
				count += i;
			} else if (i % j == 0) {
				break;
			}
		}
	}

	printf("%ld\n", count);
	return 0;
}