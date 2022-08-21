/**
 * Sum square difference
 * 
 * The sum of the squares of the first ten natural numbers is,
 *	1² + 2² + ... + 10² = 385
 * The square of the sum of the first ten natural numbers is,
 *	(1 + 2 + ... + 10)² = 55² = 3025
 * Hence the difference between the sum of the squares of the first ten natural
 * numbers and the square of the sum is 3025 - 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int sq_of_sum, sum_of_sq, result;
	sq_of_sum = 0;
	sum_of_sq = 0;

	for (int i = 1; i <= 100; i++) {
		sq_of_sum += i;
		sum_of_sq += pow(i, 2);
	}

	sq_of_sum = pow(sq_of_sum, 2);
	result = abs(sum_of_sq - sq_of_sum);

	printf("%d\n", result);
	return 0;
}