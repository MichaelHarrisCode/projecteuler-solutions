/**
 * By listing the first six prime numbers: 
 * 	2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * 
 * What is the 10 001st prime number?
 */

#include <stdio.h>

int main()
{
	int count, curr;
	count = 1;

	for (int i = 3; count < 10001; i += 2) {
		for (int j = 3; j <= i; j += 2) {
			if (i == j) {
				count++;
				curr = j;
				break;
			} else if (i % j == 0) {
				break;
			}
		}
	}

	printf("%d\n", curr);
	return 0;
}