/**
 * Smallest multiple
 * 
 * 2520 is the smallest number that can be divided by each of the numbers
 * from 1 to 10 without any remainder.
 * 
 * What is the smallest positive number that is evenly divisible by all of
 * the numbers from 1 to 20?
 */

#include <stdio.h>

int main()
{
	long int max, sm;
	max = 1;

	for (int i = 1; i <= 20; i++) {
		max *= i;
	}

	for (int i = 20; i <= max; i++) {
		for (int j = 1; j <= 20; j++) {
			if (i % j != 0) {
				break;
			} else if (j == 20) {
				printf("%d\n", i);
				return 0;
			}
		}
	}

	return 0;
}