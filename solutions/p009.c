/**
 * Special Pythagorean triplet
 * 
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * 	a² + b² = c²
 * 
 * For example, 3² + 4² = 9 + 16 = 25 = 5².
 * 
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 1; i < 1000; i++) {
		for (int j = 1; j < i; j++) {
			for (int k = 1; k < j; k++) {
				if (i + j + k == 1000 && pow(j, 2) + pow(k, 2) == pow(i, 2)) {
					printf("%d\n", i * j * k);
					return 0;
				} 
			}
		}
	}

	return 0;
}